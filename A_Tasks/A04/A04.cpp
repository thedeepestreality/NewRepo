#include <iostream>
#include "cmath"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int x1, y1, x2, y2, x3, y3; //����������  A, B, C ��������������

	cout << "������� ���������� ����� �: " << endl;
	cin >> x1 >> y1 ;
	cout << "������� ���������� ����� B: " << endl;
	cin >> x2 >> y2;
	cout << "������� ���������� ����� C: " << endl;
	cin >> x3 >> y3;
	
	double a, b, c, p, s; // ����� ������ BC, AC, AB, �������� � ������� ��������������

	a = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2)); //����� ������� BC
	b = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1)); //����� ������� AC
	c = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); //����� ������� AB

	p = a + b + c; //��������

	double pp = p / 2; //������������, ��� ������� ������
	s = sqrt(pp*(pp - a)*(pp - b)*(pp - c)); //������� �� ������� ������
	
	if (s == 0)

		cout << "����� A, B � C ����� �� ����� ������." << endl; //s=0,5 ��������� �� ������=0 => ������
	
	else
	{
		cout << "������� ������������ ABC = " << s << endl;
		cout << "�������� ������������ ABC = " << p << endl;
	}

	system("pause");
	return 0;
}