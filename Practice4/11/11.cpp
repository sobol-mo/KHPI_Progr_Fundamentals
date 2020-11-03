/*
Приклад 11.
Див. Практична робота 4.docx
*/
// Найпростіший калькулятор	
// Визначення дня тижня за датою	
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b; 		//введені з клавіатури числа
	char c; 		//введений з клавіатури знак опера-ції
	puts("\n Найпростіший калькулятор \n");
	puts("\n Введіть арифметичний вираз (у вигляді –");
	puts(" число знак число) ");
	printf(" ->\n ");
	scanf("%i %c %i", &a, &c, &b);
	switch (c)
	{
	case '+':
		printf(" = %i", a + b); break;
	case '-':
		printf(" = %i", a - b); break;
	case '*':
		printf(" = %i", a * b); break;
	case '/':
		if (b == 0)
			printf("Ділити на нуль не можна!");
		else
			printf(" = %f", (float)a / b);				
		break;
	default:
		puts("Невірний знак операції\n");
	}
	return 0;
}
