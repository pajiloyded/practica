#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    double number1, number2, avg;
    
    cout << "Введите первое число: ";
    cin >> number1;

    cout << "Введите второе число: ";
    cin >> number2;

    avg = (number1 + number2) / 2;

    cout << "Среднее арифмитическое: " << avg << endl;
}