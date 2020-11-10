/*
Приклад 3.
Див. Практична робота 5.docx
*/
// Виводить таблицю квадратів перших п'яти цілих 
// позитивних чисел				
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x = 1; 		// перше число
	int y; 		// квадрат числа
	int i; 		// лічильник циклів
	printf("Ta6лиця квадратів\n");
	printf("................ \n");
	printf("Число	  Квадрат\n");
	printf("................ \n");
		for (i = 1; i <= 5; i++)
		{
			y = x * x;
			printf("%3i\t%4i\n", x, y);
			x += 1;
		}
	printf(".................\n");
}
