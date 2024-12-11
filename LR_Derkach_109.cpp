#include <iostream>
#include <iomanip>
using namespace std;
struct student {
    char lastname[30];
    int birth;
    float vishmat;
    float opi;
    float op;
};
void show_student(student a) {
    cout << setw(20)<<left<< a.lastname<< setw(15) <<right<<a.birth<< setw(20) << a.vishmat<< setw(25) << a.opi<< setw(25) << a.op << endl;
}
int main() {
    int l_1, l_2;
    cout << "Вкажіть межу року народження 1: ";
    cin >> l_1;
    cout << "Вкажіть межу року народження 2: ";
    cin >> l_2;
    cout<<setw(20)<<left<< "Прізвище: |" << setw(15)<< "Рік народження: |"<< setw(20) << "Бал по Вищій математиці: |"
        << setw(25) << "Бал по Основам програмної інженерії: |"<< setw(25) << "Бал по Основам програмування:" << endl;
    cout <<"_______Родились в період між "<<l_1<<" і "<<l_2<<" роком:_______"<<endl;
    student m[] = {
        {"Деркач", 2007, 30.7, 40, 45.5},
        {"Кшановський", 2007, 10.4, 30, 35.5},
        {"Кремняк", 2004, 56.1, 60, 3}
    };
    int n = sizeof(m) / sizeof(m[0]);
    for (int i = 0; i < n; ++i) {
        if (m[i].birth >= l_1 && m[i].birth <= l_2) {
            show_student(m[i]);
        }
    }
    cout <<"_____Мають незадовільний бал з одної з дисциплін:______"<<endl;
    for (int i = 0; i < n; ++i) {
        if (m[i].vishmat < 30) {
            show_student(m[i]);
        }
        else if (m[i].opi < 40) {
            show_student(m[i]);
        }
        else if (m[i].op < 30) {
            show_student(m[i]);
        }
    }
    return 0;
}