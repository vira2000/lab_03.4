// Lab_03_4.cpp
// < Стахнів Віра >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y <= 0 && x <= 0 && x + y >= -R) ||
		(x >= 0 && y >= 0 && x * x + y * y >= R))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}