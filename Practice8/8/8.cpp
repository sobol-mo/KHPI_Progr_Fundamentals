/*
Приклад 8
Написати функцію, яка знаходить максимум в масиві
*/
#include <iostream>
#include "windows.h";
#include <time.h>
using namespace std;
// Прототипи
void Zap(int massiv[], int n);
int Max(int massiv[], int n);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	float a, b, c;

	while (true)
	{
		const int n = 10;
		int mas[n];
		// Заповнення масиву
		Zap(mas, n);
		// Друк результату
		for (int i = 0; i < n; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
		cout << "Максимальний елемент масиву = " 
			 << Max(mas, n) << endl;

		system("pause");
		system("cls");
	}
	return 0;
}

void Zap(int massiv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		massiv[i] = rand() % 10;
	}
}

int Max(int massiv[], int n)
{
	int m = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (massiv[i] > m) m = massiv[i];
	}
	return m;
}
