/*
Приклад 9
Виконати наступні дії:
- передати одновимірний масив у функцію;
- у функції зробити з нього двовимірний;
- провести з ним перетворення (віддзеркалити);
- вивести на друк новий двовимірний масив;
- перетворити його в одновимірний;
- вивести (повернути) одновимірний масив з функції.
*/
#include <iostream>
#include "windows.h";
using namespace std;
#define N 3
#define M 3
// Прототип
void Fun(int mas[]);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mas1[N * M] = { 4, 9, 8, 6, 4, 8, 5, 3, 2 };

	// Друк вихідного одновимірного масиву
	cout << "Вихідний одновимірний масив: " << endl;
	for (int i = 0; i < N * M; i++) 
		cout << mas1[i] << " ";
	cout << endl;

	// Перетворення масиву в функції
	Fun(mas1);

	// Друк одновимірного масиву після функції
	cout << "Одновимірний масив після функції: ";
	cout << endl;
	for (int i = 0; i < N * M; i++) 
		cout << mas1[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

void Fun(int mas[])
{
	int mas2[N][M];
	cout << "Двовимірний з одновимірного:" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mas2[i][j] = mas[i * M + j];
			cout << mas2[i][j] << " ";
		}
		cout << endl;
	}

	// Дзеркальне відображення
	int t;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M / 2; j++)
		{
			t = mas2[i][j];
			mas2[i][j] = mas2[i][M - 1 - j];
			mas2[i][M - 1 - j] = t;
		}
	}

	// Друк нового двовимірного масиву
	cout << "Двовимірний масив після ";
	cout << "дзеркального відображення : " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << mas2[i][j] << " ";
		}
		cout << endl;
	}

	// Перетворення двовимірного в одновимірний
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mas[i * M + j] = mas2[i][j];
		}
	}
} // end Fun
