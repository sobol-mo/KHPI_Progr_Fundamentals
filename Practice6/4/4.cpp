/*
Приклад 4.
Див. Практична робота 6.docx
*/
// Сортування масиву методом "бульбашки"
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define SZ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[SZ];
	int i; 			// лічильник циклів
	int k; 			// поточний індекс елемента масиву
	int buf;
	printf("\nСортування масиву методом \" бульбашки \"\n");
	printf("Введіть масив з %i цілих чисел и натисніть", SZ);
	printf(" <Enter>\n");
	for (k = 0; k < SZ; k++)
		scanf("%d", &a[k]);
	printf("Сортування...\n");
	for (i = 0; i < SZ - 1; i++)
	{
		for (k = 0; k < SZ - 1; k++)
		{
			if (a[k] < a[k + 1])
			{	// обмін k-го і (k + 1)-го елементів
				buf = a[k];
				a[k] = a[k + 1];
				a[k + 1] = buf;
			}
		}
	}
	printf("Масив відсортований –> ");
	for (k = 0; k < SZ; k++)
		printf("%d ", a[k]);
	return 0;
}