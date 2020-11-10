/*
До практики № 5 по циклам та операторам переходу
Приклад 1.
Див. Практична робота 5.docx
*/
//цикл for
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int S, n, i;
	printf("Введіть n :");    
	scanf(" %d", &n);
	for (S = 0, i = 1; i <= n; i++)
	{
		S += i * i;     //    відповідає S = S + i * i
	}
	printf("n = %d S = %d", n, S);
	return 0;
}
