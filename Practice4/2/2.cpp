/*
Приклад 2.
Див. Практична робота 4.docx
*/
// Написати умовний оператор
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c; 	// числа, введені з клавіатури
	printf("Введіть цілі числа a, b, c і натисніть <Enter>");
	printf("-> ");
	scanf("%i %i %i", &a, &b, &c);
	if (a <= b && b <= c)
	{
		a = pow(a, 2);
		b = pow(b, 2);
		c = pow(c, 2);
	}
	else
		if (a > b && b > c)
		{
			b = a;
			c = a;
		}
		else
		{
			a = - a;
			b = - b;
			c = - c;
		}
	printf("a = %i  b = %i  c = %i", a, b, c);
	return 0;
}
