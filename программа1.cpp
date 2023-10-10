#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Russian");
	int number;
	cout << "Введите число: ";
	cin >> number;

	int square = number * number;
	int cube = number * number * number;
	cout << "Квадрат числа: " << square << endl;
	cout << "Куб числа: " << cube << endl;
}
