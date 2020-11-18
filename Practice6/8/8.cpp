/*
Приклад 8.
Див. Практична робота 6.docx
*/
// Масив тільки з позитивних
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define SZ 8
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[SZ];	   	// вхідний масив
	int b[SZ];	   	// вихідний масив
	int i_b; 		// індекс вихідного масиву
	printf("\n Масив тільки з позитивних \n");
	printf("Введіть масив (%i цілих чисел) -> ", SZ);
	for (int k = 0; k < SZ; k++)
		scanf("%i", &a[k]);
	i_b = 0;
	for (int k = 0; k < SZ; k++)
	{
		if (a[k] > 0)
			b[i_b++] = a[k];
	}
	printf("Новий масив -> ");
	for (int i = 0; i < i_b; i++)
		printf("%i ", b[i]);
	return 0;
}
