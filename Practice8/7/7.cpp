/*
Приклад 7
Написати функцію, яка заповнює одновимірний масив
випадковими числами
*/
#include <iostream>
#include "windows.h";
#include <time.h>
using namespace std;

// Прототип
void Zap(int massiv[], int n);

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