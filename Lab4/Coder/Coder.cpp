/******************************************************/
/*           Лабораторная работа №4 (часть 1)         */
/*                   Упаковка кода                    */
/*            Пример выполнения. Вариант №30.         */
/******************************************************/
#include <iostream>
#include "windows.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; /* код состояния */
	unsigned short f; /* признак ошибки */
	unsigned short b; /* признак занятости */
	unsigned short n; /* количество байт */
	unsigned short int UnitStateWord; /* слово состояния */
								/* ввод составных частей */
	printf("Введите код состояния (0 - 31) >");
	scanf_s("%hu", &c);
	printf("Введите признак ошибки (0 / 1) >");
	scanf_s("%hu", &f);
	printf("Введите признак занятости (0 / 1) >");
	scanf_s("%hu", &b);
	printf("Введите количество переданных байт (0 - 255) >");
	scanf_s("%hu", &n);
	/* формирование упакованного кода */
	UnitStateWord = (c & 0x1F) << 11;
	UnitStateWord |= (f & 1) << 9;
	UnitStateWord |= (b & 1) << 8;
	UnitStateWord |= n & 0xFF;
	/* вывод результата */
	printf("\nСлово состояния устройства = %04x\n",
		UnitStateWord);
	return 0;
}