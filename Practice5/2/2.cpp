/*
Приклад 2.
Див. Практична робота 5.docx
*/
// цикли while та do…while
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int S, K, i;
	printf("Введіть К :");
	scanf(" %d", &K);
	S = 0;
	i = 0;
	while (S < K)		// цикл с передумовою
	{
		i++;
		S += i * i;
	}
	printf("n = %d S = %d \n", i, S);
	S = 0;
	i = 0;
	do					// цикл с постумовою
	{
		i++;
		S += i * i;
	} while (S < K);
	printf("n = %d S = %d \n", i, S);
	return 0;
}
