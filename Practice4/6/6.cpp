/*
Приклад 6.
Див. Практична робота 4.docx
*/
// Перевірка вміння множити числа
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <stdlib.h>		//для доступу к srand
#include <time.h>		//для доступу к time
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int ml, m2, p; 	// співмножники і добуток
	int otv; 		// відповідь
	time_t t; 		// поточний час - для ініціалізації	
				// генератора випадкових чисел
	srand((unsigned)time(&t)); // ініціалізація генератора
					// випадкових чисел
	ml = rand() % 9 + 1; 	// залишок від ділення rand() на 9 
				// лежить в діапазоні від 0 до 8
	m2 = rand() % 9 + 1;
	p = ml * m2;
	printf("Скільки буде %i x %i ?\n", ml, m2);
	printf("Введіть відповідь и натисніть <Enter>\n");
	printf("-> ");
	scanf("%i", &otv);
	if (p == otv)
		printf("Вірно");
	else
		printf("Вы помилились –> %i x %i = %i", ml, m2, p);
	return 0;
}