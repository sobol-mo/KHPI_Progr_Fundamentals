/*
Приклад 7.
Див. Практична робота 5.docx
*/
// Визначення максимального числа з послідовності позитивних чисел
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a; 		// введене число
	int m; 		// максимальне число
	puts("\nВизначення максимального числа з ");
	puts("послідовності позитивних чисел.\n");
	puts("Введіть числа. Для завершення введення введіть нуль.\n");
	m = 0;
	do
	{
		printf("-> ");
		scanf("%i", &a);
		if (a > m)
			m = a;
	} while (a > 0);
	printf("Максимальне число: %i", m);
	return 0;
}
