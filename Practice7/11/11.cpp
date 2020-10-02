/*
Приклад 11
Написати програму, яка обчислює дохід за вкладом.
Процентна ставка за вкладом визначається на основі
даних, наведених у таблиці 7.1.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// процентна ставка (таблиця 7.1)
	float rate[3][6] =
	{
	15.0,16.5,18.0,19.5,21.0,24.0,
	16.5,18.0,19.5,21.0,22.5,24.0,
	18.0,19.5,21.0,22.5,24.0,27.0
	};
	float value;	// сума
	int period;		// строк (місяців)
	float profit;	// дохід
	int r, c;
	// вивести таблицю
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 6; c++)
			printf("%8.2f", rate[r][c]);
		printf("\n");
	}
	printf("Сума, грн.-> ");
	scanf("%f", &value);
	printf("Строк, міс. -> ");
	scanf("%i", &period);
	if (value <= 10000)
		r = 0;
	else
		if (value <= 300000)
			r = 1;
		else
			r = 3;
	switch (period)
	{
	case 3: c = 0; break;
	case 6: c = 1; break;
	case 12: c = 2; break;
	case 18: c = 3; break;
	case 24: c = 4; break;
	case 36: c = 6; break;
	default: period = 0;
	}
	if (period != 0)
	{
		printf("\npoцентна ставка: %5.2f", 
			rate[r][c]);
		profit = value * rate[r][c] / 100 / 12 * period;
		printf("\nДохід: %6.2f грн.", profit);
	}
	else
		printf("Неправильно зазначено термін");
	printf("\nДля завершення натисніть <Enter>");
	getchar();
}