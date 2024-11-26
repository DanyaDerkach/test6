#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	//нові зміни
    //зміни
    //зміни
    //new code
    float x, a, b, c, f;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    
    if (x < 0 && b != 0) {
        f = (-a * pow(x, 2)) + b;
    } 
    else if (x > 0 && b == 0) {
        f = (x / (x - c)) + 5.5;
    } 
    else {
        f = x / (-c);
    }
    
    cout << "F = " << f << endl;

    return 0;
}
