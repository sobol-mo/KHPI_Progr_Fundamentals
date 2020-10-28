/******************************************************/
/*           Лабораторная работа #4 (часть 2)         */
/*                 Распаковка кода                    */
/*            Пример выполнения. Вариант #30.         */
/******************************************************/
#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; /* код состояния */
	unsigned short f; /* признак ошибки */
	unsigned short b; /* признак занятости */
	unsigned short n; /* количество байт */
	unsigned short int UnitStateWord; /* слово состояния */
								/* ввод слова состояния устройства */
	printf("Введите cлово состояния устройства \n");
	printf("(16-ричное число от 0 до 0xFFFF) >");
	scanf_s("%hx", &UnitStateWord);
	/* Выделение составных частей */
	c = (UnitStateWord >> 11) & 0x1F;
	f = (UnitStateWord >> 9) & 1;
	b = (UnitStateWord >> 8) & 1;
	n = UnitStateWord & 0xFF;
	/* вывод результатов */
	putchar('\n');
	printf("Код состояния              = %hu\n", c);
	printf("Признак ошибки             = %hu\n", f);
	printf("Признак занятости          = %hu\n", b);
	printf("Количество переданных байт = %hu\n", n);
	return 0;
}