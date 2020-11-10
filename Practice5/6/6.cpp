/*
Приклад 6.
Див. Практична робота 5.docx
*/
// Обчислення середнього арифметичного послідовності позитивних чисел
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a; 		// число, введене з клавіатури
	int n; 		// кількість чисел
	int s; 		// сума чисел
	float m; 	// середнє арифметичне

	s = 0;
	n = 0;
	printf("\nОбчислення середнього арифметичного\n ");
	printf("послідовності позитивних чисел.\n");
	printf("Введіть числа. Для завершення введення ");
	printf("введіть	нуль.\n");
	do
	{
		printf("-> ");
		scanf("%i", &a);
		if (a > 0) {
			s += a;
			n++;
		}
	} while (a > 0);
	printf("Введено чисел: %i\n", n);
	printf("Сума чисел: %i\n", s);
	m = (float)s / n;
	printf("Середнє арифметичне: %3.2f", m);
	return 0;
}
