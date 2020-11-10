/*
Приклад 10.
Див. Практична робота 5.docx
*/
// Друк букв латинського алфавіту
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, j, c;
	// Зовнішній цикл забезпечує виведення 5 рядків
	// з початковими символами 'A', 'B', 'C', 'D', і 'E'
	for (i = 'A'; i <= 'E'; i++)
	{
		// Внутрішній цикл забезпечує виведення рівно 5 символів
		//починаючи з символу i
		for (c = i, j = 0; j < 5; c++, ++j)
		{
			printf("%c   ", c);
		}
		printf("\n");
	}
	return 0;
}
