#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	system("color F0");

	const int N = 5;
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << "\t";
	}

	system("pause");
}