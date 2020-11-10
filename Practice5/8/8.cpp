/*
Приклад 8.
Див. Практична робота 5.docx
*/
// Визначення простого числа
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n; 		// число
	int d; 		// дільник
	int r; 		// залишок від ділення n на d
	printf("Введіть ціле число і натисніть <Enter>\n-> ");
	scanf("%i", &n);
	d = 2; 		// спочатку ділимо на два
	do
	{
		r = n % d;
		if (r != 0)
			d++;
	} while (r != 0); 	// поки n не поділиться на d
	if (d == n)
	{
		printf("%i - просте число", n);
	}
	else
	{
		printf("%i - не просте число", n);
	}
	return 0;
}
