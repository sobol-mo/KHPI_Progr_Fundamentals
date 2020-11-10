/*
Приклад 9.
Див. Практична робота 5.docx
*/
// Визначення найбільшого спільного дільника двох цілих чисел
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int nl, n2; 	// числа, НСД яких треба обчислсит
	int nod; 	// найбільший спільний дільник
	int r; 		// залишок від ділення nl на n2
	printf("\nВизначення найбільшого спільного дільника ");
	printf("двох цілих чисел.\n");
	printf("Введіть два числа і натисніть <Enter>\n");
	printf("-> ");
	scanf("%i %i", &nl, &n2);
	printf("НСД чисел %i і %i - це ", nl, n2);
	while (nl % n2)
	{
		r = nl % n2; // залишок від ділення
		nl = n2;
		n2 = r;
	}
	nod = n2;
	printf("%i\n", nod);
	return 0;
}
