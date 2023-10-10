#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Russian");
	int a, b, i, summa = 0;
	cout << "Введи диапазон: " << endl;
	cin >> a >> b;
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			summa += i;
		else continue;
	}
	cout << "Сумма = " << summa << endl;
	return 0;
}