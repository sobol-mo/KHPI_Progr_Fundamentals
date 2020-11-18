/*
Приклад 7.
Див. Практична робота 6.docx
*/
// Пошук мінімального з непарних та його порядкового номеру
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define SZ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[SZ];	   	// вхідний масив
	int min, i_min; 	//мінімальний та його порядковий номер
	printf("\n Пошук мінімального з непарних \n");
	printf("Введіть масив (%i цілих чисел -> ", SZ);
	for (int k = 0; k < SZ; k++)
		scanf("%i", &a[k]);
	min = 100;
	for (int k = 0; k < SZ; k++)
	{
		if (k % 2 != 0 && a[k] < min) {
			min = a[k];
			i_min = k;
		}
	}
	printf("Мінімальний елемент %i", min);
	printf("\nПорядковий номер %i\n", i_min);
	return 0;
}
