/*
Приклад 6.
Див. Практична робота 6.docx
*/
// Заміна парних елементів та кількість непарних
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
	int count; 		//кількість непарних елементів
	printf("\n Заміна парних елементів та ");
	printf("кількість непарних\n");
	printf("Введіть масив (%i цілих чисел) -> ", SZ);
	for (int k = 0; k < SZ; k++)
		scanf("%i", &a[k]);
	count = 0;
	for (int k = 0; k < SZ; k++)
	{
		if ((a[k] % 2) == 0)
			a[k] = 0;
		else
			count++;
	}
	printf("Масив - результат -> ");
	for (int i = 0; i < SZ; i++)
		printf("%i ", a[i]);
	printf("\nНепарних елементів %i ", count);
	return 0;
}
