/*
До практики № 4 по умовним операторам.
Приклад 1.
Див. Практична робота 4.docx
*/
// Обчислення змінної f 
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a; 		// число, введене з клавіатури
	int f;	 	// результат обчислення змінної f

	printf("\nОбчислення значення змінної f\n ");
	printf("Введіть ціле число і натисніть <Enter>");
	printf("-> ");
	{//1a
		scanf("%i", &a);
		if (a >= -2 && a < 2)
			f = a * a;
		else
			f = 4;
		printf("Змінна f = %d ", f);
	}
	{//1б
		scanf("%i", &a);
		if (a <= 2)
			f = a * a + 4 * a + 5;
		else
			f = 1 / (a * a + 4 * a + 5);
		printf("Змінна f = %d ", f);
	}

	{//1в
		scanf("%i", &a);
		if (a <= 0)
			f = 0;
		else
			if (a <= 1)
				f = a;
			else
				f = pow(a, 4);
		printf("Змінна f = %d ", f);
	}
	return 0;
}
