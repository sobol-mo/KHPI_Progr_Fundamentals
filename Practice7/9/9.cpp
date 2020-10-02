﻿/*
Приклад 9
Написати програму, яка обробляє результати іспиту.
Для кож-ної оцінки програма повинна обчислити відсоток
від загальної кілько-сті оцінок.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n[6];   // кількість двійок, ... п'ятірок
	int s = 0;  // всього оцінок
	float p[6]; // відсоток кожної оцінки
	char mes[6][10];
	strcpy(mes[0], "\0");
	strcpy(mes[1], "\0");
	strcpy(mes[2], "двійок\0");
	strcpy(mes[3], "трійок\0");
	strcpy(mes[4], "четвірок\0");
	strcpy(mes[5], "п'ятірок\0");
	int i;
	puts("Обробка результатів іспиту");
	puts("Введіть початкові дані:");
	for (i = 5; i >= 2; i--)
	{
		printf("%s ->", mes[i]);
		scanf("%i", &n[i]);
		s += n[i];
	}
	// обчислимо відсоток кожної оцінки
	for (i = 2; i < 6; i++)
		p[i] = (float)n[i] / s * 100;
	puts("Результати іспиту");
	puts("------------------------------");
	for (i = 5; i >= 2; i--)
		printf("%8s %2i   %2.0f%% \n", mes[i], n[i], p[i]);
	puts("------------------------------");
	puts("Для завершення натисніть <Enter>");
	getchar();
}