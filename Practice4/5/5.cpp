/*
Приклад 5.
Див. Практична робота 4.docx
*/
// Рішення квадратного рівняння
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c;		// коефіцієнти рівняння
	float xl, x2; 		// корні рівняння
	float d;			// дискримінант
	printf("\nРішення квадратного рівняння\n");
	printf("Введіть значення коефіцієнтів и натисніть "); 	
	printf("<Enter»\n");
	printf("-> ");
	scanf("%f%f%f", &a, &b, &c); // введення коефіцієнтів
	d = b * b - 4 * a * c; 		 // дискримінант
	if (d < 0)
	{
		printf("Рівняння не має рішення\n");
	}
	else
	{
		xl = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("Корні рівняння: xl=%3.2f x2=%3.2f\n", xl, x2);
	}
	return 0;
}
