#include <iostream>
#include "cmath"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c; //������������
	double d, x, x1, x2; //������������, x ��� d=0, x1 x2 ��� d>0

	cout << "������� ������������ a, b, c: " << endl;
	cin >> a >> b >> c;

	if ((a == 0) && (b == 0))
	{
		if (c != 0)
			cout << "������!" << endl; //0!=0
		else
			cout << "x -- �����." << endl; //0=0
	}

	else
	{
		if (a == 0)

		{
			cout << "��������� �� ����������." << endl; //bx+c=0
			cout << "x=" << (-c / b) << endl;
		}

		else
		{
			d = (b*b - 4*a*c); //������������

			if (d < 0)
				cout << "��� ������������ ������." << endl; //d<0
			else
			{
				if (d == 0)
					cout << "x=" << -b / (2 * a) << endl;//1 ������ ��� d=0

				else
				{
					x1 = (-b - sqrt(d)) / (2 * a);
					x2 = (-b + sqrt(d)) / (2 * a);

					cout << "x1=" << x1 << endl;
					cout << "x2=" << x2 << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}