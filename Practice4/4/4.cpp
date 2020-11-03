/*
Приклад 4.
Див. Практична робота 4.docx
*/
// Обчислення площі кільця
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float rl, r2; 		// радіус кільця і отвіру
	float s; 		// площа кільця
	printf("\nBведіть данні:\n");
	printf("радіус кільця (см) -> ");
	scanf("%f", &rl);
	printf("радіус отвіру (см) -> ");
	scanf("%f", &r2);
	if (rl > r2)
	{
		s = 2 * 3.14 * (rl - r2);
		printf("\nПлоща кільця %6.2f кв.см\n", s);
	}
	else
	{
		printf("\n Помилка! Радіус отвіру не може бути ");
		printf("більше радіусу кільця.\n ");
	}
	return 0;
}
