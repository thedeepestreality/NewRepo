#include <iostream>
#include "cmath"
using namespace std;

int main()
{
	int time1[3], time2[3] = { 0 }; //������� ��� �������� �������

	cout << "����� 1: " << endl;
	for (int i = 0; i < 3; i++)
		cin >> time1[i];

	if ((time1[0] > 23) || (time1[1] > 59) || (time1[2] > 59)) //23:59:59 -- ��������
		cout << "������������ ��������!" << endl; 

	else
	{
		cout << "����� 2: " << endl;
		for (int i = 0; i < 3; i++)
			cin >> time2[i];

		if ((time2[0] > 23) || (time2[1] > 59) || (time2[2] > 59))
			cout << "������������ ��������!" << endl;

		else
		{
			int a = (time1[0]) * 3600 + (time1[1]) * 60 + (time1[2]);
			int b = (time2[0]) * 3600 + (time2[1]) * 60 + (time2[2]); //������� � ������� ��� ���������� ��������

			int sum = abs(b - a); //������ ��������

			int time3[3] = { 0 };

			time3[0] = sum / 60 / 60; //����
			sum = sum - time3[0] * 60 * 60; //����� ����� ����� �����

			time3[1] = sum / 60; //������
			sum = sum - time3[1] * 60; //����� ����� ����� �����

			time3[2] = sum; // ������� -- �������

			cout << "�������: " << (time3[0]) << " �����, " << (time3[1]) << " �����, " << (time3[2]) << " ������." << endl;
		}
	}
	
		int t = 0; //Added new variable for time
		system("pause");
		return 0;
	
}