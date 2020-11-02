/****************************************************/
/*              Лабораторная работа №5              */
/*                 Условный оператор                */
/*         Пример выполнение. Вариант №30.          */
/****************************************************/
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y; /* координаты точки */
	while (true)
	{
		system("cls");
		/* ввод координат */
		printf("Введите координату x >");
		scanf("%lf", &x);
		printf("Введите координату y >");
		scanf("%lf", &y);
		/* вывод только что введенных значений */
		printf("x=%6.3lf;  y=%6.3lf\n", x, y);
		/* проверка условий */
		if ((y >= 1 - x)
			&& (x * x + y * y <= 1))
			printf("Точка попадает в область\n");
		else printf("Точка не попадает в область\n");
		printf("Для продолжения нажмите любую клавишу");
		_getch();
	}

	return 0;
}