#include <iostream>
#include "cmath"
using namespace std;
//��� ���� � ������� ���������
int main()
{
	setlocale(LC_ALL, "RUS");

	const double PI = 3.1415926535897932384626433832795;
	double a, z1, z2;

	cout << "������� ���� alpha � ��������: " << endl;
	cin >> a;

	if
		(a == 135)
	{
		cout << "z1 �� ����������" << endl; //sin270=-1, ����������� =0
		cout << "z2 �� ����������" << endl; //tg135=-1, ����������� =0
	}
	else
	{
		if
			(a == 315)
		{
			a = (a * 180 / PI);
			z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));
			cout << "z1=" << z1 << endl;
		    cout << "z2 �� ����������" << endl; //tg315 = -1, ����������� = 0
		}

		else
		{
			a = (a * 180 / PI);
			z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));
			z2 = (1 - tan(a)) / (1 + tan(a));
			cout << "z1=" << z1 << endl;
			cout << "z2=" << z2 << endl;
		}
	}

	system("pause");
	return 0;
}