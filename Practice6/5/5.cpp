/*
Приклад 5.
Див. Практична робота 6.docx
*/
// Об'єднання двох упорядкованих за зростанням масивів
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define SZ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[SZ], b[SZ];   // вхідні масиви
	int c[SZ * 2]; 		// масив - результат
	int k, i, m; 		// індекси масивів a, b і с
	printf("Об'єднання двох упорядкованих ");
	printf("за зростанням масивів \n");
	printf("Введіть перший масив ");
	printf("(5 цілих чисел) ->  ", SZ);
	for (k = 0; k < SZ; k++)
		scanf("%i", &a[k]);
	printf("Введіть другий масив ");
	printf("(5 цілих чисел) ->  ", SZ);
	for (i = 0; i < SZ; i++)
		scanf("%i", &b[i]);
	k = i = m = 0;
	do
	{
		if (a[k] < b[i])
			c[m++] = a[k++];
		else
			if (a[k] > b[i])
				c[m++] = b[i++];
			else
			{
				c[m++] = a[k++];
				c[m++] = b[i++];
			}
	} while (k < SZ && i < SZ); // поки один з двох вихідних
					// масивів повністю не 
					// переписаний в масив с
	while (k < SZ)		// є елементи а, що не переписані в с 
		c[m++] = a[k++];
	while (i < SZ) 	// є елементи b, що не переписані в с
		c[m++] = b[i++];
	printf("Масив - результат: \n");
	for (i = 0; i < 2 * SZ; i++)
		printf("%i ", c[i]);
	return 0;
}
