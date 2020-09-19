/*
Приклад 2
Необхідно згенерувати двовимірний масив 5 на 5, 
що складається з цілих чисел від 0 до 100, 
в якому потрібно знайти:
а)	Суму елементів на головній діагоналі (ГД), які> 20
б)	Добуток елементів на побічної діагоналі (ПД), 
які кратні 4
в)	Кількість елементів під ПД, які дорівнюють 15
г)	Кількість парних елементів над ГД
*/
#include <iostream>
#include <time.h> 
#include <iomanip> // для форматування виводу cout
#include "windows.h";
using namespace std;
const int N = 5;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int matr[N][N];
	while (true)
	{
		// Заповнення матриці і виведення на друк
		cout << "Початкова матриця: " << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				matr[i][j] = rand() % 99;
				/* 
				Форматування при використанні cout
				cout.setf(ios::fixed);
				cout << setw(2) << matr[i][j] << " ";
				*/
				printf("%2i ", matr[i][j]);
			}
			cout << endl;
		}
		cout << endl;
		// Введення змінних
		int sGD = 0; // Сума елементів на ГД
		int pPD = 1; // Добуток елементів на ПД
		int cPD = 0; // Кількість елементів під ПД = 15
		int cGD = 0; // Кількість парних під ГД
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if ((i == j) && (matr[i][j] > 20)) 
					sGD += matr[i][j];
				if (((i + j) == (N - 1)) && 
					(matr[i][j] % 4 == 0)) 
					pPD *= matr[i][j];
				if (((i + j) > (N - 1)) && 
					(matr[i][j] == 15)) cPD++;
				if ((i > j) && (matr[i][j] % 2 == 0)) 
					cGD++;
			}
		}
		// Друк результатів
		cout << "Сума елементів на ГД > 20 = " << sGD 
			<< endl;
		cout << "Добуток елементів на ПД кратные 4 = " 
			<< pPD << endl;
		cout << "Кількість елементів під ПД = 15 = " 
			<< cPD << endl;
		cout << "Кількість парних під ГД = " << cGD 
			<< endl;
		getchar();
		system("cls");
	}
	return 0;
}