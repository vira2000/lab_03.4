// Lab_03_4.cpp
// < ������ ³�� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 11

#include <iostream>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if ((y <= 0 && x <= 0 && x + y >= -R) ||
		(x >= 0 && y >= 0 && x * x + y * y >= R))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}