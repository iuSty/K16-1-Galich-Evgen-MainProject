#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	system("color F0");

	int a = 0;
	cout << "������� �����: (�� 0 �� 9999)" << endl;
	cin >> a;
	while (a >= 0 && a < 9999)
	{
		if (a >= 0 && a < 9999)
		{
			cout << "���� ����� �����, ���������� ������: " << endl;
			
		}
		else
		{
			cout << "���� ������ �����, ������� ������ �����: " << endl;
			cin >> a;
		}
	}
	system("pause");
}