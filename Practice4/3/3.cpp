/*
Приклад 3.
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
	float x, y; 	// числа, введені з клавіатури
	printf("Введіть цілі числа x, y і натисніть <Enter> ->");
	//printf("-> ");  	
	scanf("%f %f", &x, &y);
	if (x < 0 && y < 0)
	{
		x = fabs(x);
		y = fabs(y);
	}
	else
		if (x < 0 || y < 0)
		{
			x += 0.5;
			y += 0.5;
		}
		else
			if (!((x >= 0.5 && x <= 2.0) ||
				(y >= 0.5 && y <= 2.0)))
			{
				x /= 10.0;
				y /= 10.0;
			}
	printf("x = %lf  y = %lf", x, y);
	return 0;
}
