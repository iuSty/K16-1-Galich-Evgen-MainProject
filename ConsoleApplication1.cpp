// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void my_func(int aaa, int bbb)
{
	int sum;
	sum = aaa+bbb;
	cout << sum << endl;
	
}

int main()
{
	int x = 10;
	int y = 20;
	my_func(x, y);
	//cout << x << endl << y << endl;
	system("pause");
    return 0;
}

