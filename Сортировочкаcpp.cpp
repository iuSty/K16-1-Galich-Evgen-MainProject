#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	system("color F0");

	int a = 0;
	cout << "Введите число: (от 0 до 9999)" << endl;
	cin >> a;
	while (a >= 0 && a < 9999)
	{
		if (a >= 0 && a < 9999)
		{
			cout << "Есть такое число, продолжаем работу: " << endl;
			
		}
		else
		{
			cout << "Нету такого числа, введите заново число: " << endl;
			cin >> a;
		}
	}
	system("pause");
}