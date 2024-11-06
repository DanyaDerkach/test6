#include <iostream>
#include <cmath> // Для математичних операцій

using namespace std;

int main() {
    float number;
    cout << "Введіть двозначне число типу float: ";
    cin >> number;

    // Переведення числа до цілого типу через static_cast
    int int_number = static_cast<int>(number);

    // Перевірка, чи є число двозначним
    if (int_number < 10 || int_number > 99) {
        cout << "Помилка: введене число не є двозначним." << endl;
        return 1;
    }

    // Отримання цифр числа
    int first_digit = int_number / 10;
    int second_digit = int_number % 10;

    // Сума та добуток цифр
    int sum = first_digit + second_digit;
    int product = first_digit * second_digit;

    // Виведення результатів
    cout << "Сума цифр: " << sum << endl;
    cout << "Добуток цифр: " << product << endl;

    return 0;
}
