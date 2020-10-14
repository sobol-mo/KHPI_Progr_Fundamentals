﻿/*
До практики № 7 по двовимірним масивам.
Приклад 1:
Надано квадратний двовимірний масив int A [n] [n]. 
Необхідно елементам, що знаходяться на головній діагоналі (ГД), 
що проходить з лі-вого верхнього кута в правий нижній 
(тобто тим елементам A [i] [j], для яких i == j) 
присвоїти значення 1, елементам, що знаходяться вище 
головної  діагоналі (i < j) - значення 0, елементів, 
що знаходяться нижче головної діагоналі (i > j) - значення 2. 
Тобто отримати такий масив (приклад для n == 4):
https://foxford.ru/wiki/informatika/dvumernye-massivy-v-c
1 0 0 0
2 1 0 0
2 2 1 0
2 2 2 1

*/

#include <iostream>
#include "windows.h";
using namespace std;

#define n 4 // кількість рядків і стовпців

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A[n][n];
	// Заповнення відносно головної діагоналі
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			if (i < j)
				A[i][j] = 0;
			else if (i > j)
				A[i][j] = 2;
			else
				A[i][j] = 1;
		}

	// Друк матриці
	printf("Спосіб 1:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%i ", A[i][j]);
		printf("\n");
	}
	printf("\n");

	// Заповнення відносно побічної діагоналі (ПД)
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			if (i < n - 1 - j)
				A[i][j] = 0;
			else if (i > n - 1 - j)
				A[i][j] = 2;
			else
				A[i][j] = 1;
		}

	// Друк матриці
	printf("Спосіб 1, але відносно побічної діагоналі:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%i ", A[i][j]);
		printf("\n");
	}
	printf("\n");

	// Без викориснання оператору if
	// Спочатку заповнення головної діагоналі
	for (int i = 0; i < n; ++i)
		A[i][i] = 1;

	// Потім заповнимо значенням 0 всі елементи вище головної діагоналі, 
	// для чого нам знадобиться в кожній з рядків з номером i призначити 
	// значення елементам A[i][j] для j = i + 1, …, n - 1.
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			A[i][j] = 0;

	// Аналогічно присвоюємо значення 2 елементам A[i][j] для j = 0, …, i - 1:
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < i; ++j)
			A[i][j] = 2;

	// Друк матриці
	printf("Спосіб 2 (без if):\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%i ", A[i][j]);
		printf("\n");
	}
	printf("\n");

	// Можна також зовнішні цикли об'єднати в один 
	// і отримати ще одне, більш компактне рішення:
	int j;
	for (int i = 0; i < n; ++i) {   // Заповнюємо рядок з номером i
		for (j = 0; j < i; ++j)		// Спочатку пишемо 2 нижче діагоналі
			A[i][j] = 2;
		// Після завершення попереднього циклу i == j, пишемо 1
		A[i][j] = 1;
		for (++j; j < n; ++j) // Цикл починаємо з збільшення j на 1
			A[i][j] = 0;	  // Записуємо 0 вище діагоналі
	}

	// Друк матриці
	printf("Спосіб 3:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%i ", A[i][j]);
		printf("\n");
	}
	printf("\n");
}

