/**************************************************/
/*            Лабораторная работа №3              */
/*       Арифметические выражения и функции       */
/*         Пример решения. Вариант №30.           */
/**************************************************/
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* параметры, которые вводятся */
	double x, y;
	/* параметры, которые задаются в программе */
	double a = 12.5, b = 1.3;
	double c = 14.1, d = 2.7;
	double t1, t2;   /* результаты */
	double ax;       /* рабочая переменная */

	printf("Введите x, y >");
	scanf("%lf %lf", &x, &y);

	ax = a * x;
	t1 = (b * log(ax + b) / a + d * log(y * x + d) / y) / c;

	ax = sqrt((c - b) * (c + b)) * tan(ax * 3.14 / 180);
	t2 = log((ax + b) / (ax - b)) / 2 / a / b;

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}