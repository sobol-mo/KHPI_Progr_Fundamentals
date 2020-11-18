/*
До практики № 6 по роботи з одномірними масивами в мовах С/С++
Приклад 1.
Див. Практична робота 6.docx
*/
// Введення та обробка масиву 
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[7]; 		// масив
	int sum; 		// сума елементів масиву
	float m; 		// середнє арифметичне
	printf("\n Введення масиву цілих чисел ");
	printf("\n Після введення кожного числа натисніть Enter>\n");
	// введення масиву
	for (int j = 0; j < 7; j++)
	{
		printf("\na[%i] -> ", j);
		scanf("%i", &a[j]);
	}
	// виведення масиву
	printf("\nMacив: \n");
		for (int j = 0; j < 7; j++)
		{
			printf("%i ", a[j]);
		}
	sum = 0;
	// обчислення суми елементів
	for (int j = 0; j < 7; j++)
	{
		sum = sum + a[j];
	}
	m = sum / 7;
	printf("Середнє арифметичне: %f", m);
	return 0;
}
