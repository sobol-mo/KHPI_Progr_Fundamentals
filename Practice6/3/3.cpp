/*
Приклад 3.
Див. Практична робота 6.docx
*/
// Перевірка, чи відсортований чи масив по зростанню
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define НВ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[НВ]; 	// масив цілих чисел
	int ok;		// 1 - последовательность неубутна
	int k;		//індекс
	printf("\nПеревірка, чи відсортований чи масив ");
	printf("по зростанню \n");
	printf("Введіть масив з %i цілих чисел и натисніть", НВ);
	printf(" <Enter>\n");
	for (int k = 0; k < НВ; k++)
		scanf("%i", &a[k]);
	k = 0;
	ok = 1;
	do
	{
		if (a[k] > a[k + 1])
			ok = 0;
		k++;
	} while (k < НВ - 1 && ok);
	printf("\nЕлементи масиву ");
	if (!ok)
		printf("нe ");
	printf("упорядковані по зростанню");
	return 0;
}
