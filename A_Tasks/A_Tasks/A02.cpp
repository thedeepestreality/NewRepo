#include <iostream>
#include "cmath"
using namespace std;
//ѕро угол и радианы отписалс€
int main()
{
	setlocale(LC_ALL, "RUS");

	const double PI = 3.1415926535897932384626433832795;
	double a, z1, z2;

	cout << "¬ведите угол alpha в градусах: " << endl;
	cin >> a;

	if
		(a == 135)
	{
		cout << "z1 не существует" << endl; //sin270=-1, знаменатель =0
		cout << "z2 не существует" << endl; //tg135=-1, знаменатель =0
	}
	else
	{
		if
			(a == 315)
		{
			a = (a * 180 / PI);
			z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));
			cout << "z1=" << z1 << endl;
		    cout << "z2 не существует" << endl; //tg315 = -1, знаменатель = 0
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