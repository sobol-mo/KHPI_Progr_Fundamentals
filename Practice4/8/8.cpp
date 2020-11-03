/*
Приклад 8.
Див. Практична робота 4.docx
*/
// Обчислення дати наступного дня	
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day;
	int month;
	int year;
	int last;	// 1, якщо поточний день останній день місяця
	int r;		// якщо рік високосний, то залишок від
			// ділення year на 4 дорівнює нулю
	printf("Введіть цифрами сьогоднішню дату\n");
	printf("(число місяць рік) -> ");
	scanf("%i%i%i", &day, &month, &year);
	last = 0;
	if (month == 2)
	{
		if ((year % 4) != 0 && day == 28) last = 1;
		if ((year % 4) == 0 && day == 29) last = 1;
	}
	else
		if ((month == 4 || month == 6 ||
			month == 9 || month == 11) && (day == 31))
			last = 1;

		else
			if (day == 31)
				last = 1;
	if (last == 1)
	{
		printf("Останній день місяця!\n");
		day = 1;
		if (month == 12)
		{
			month = 1;
			year++;
			printf("З наступаючим Новим роком!\n");
		}
		else
			month++;
	}
	else
		day++;

	printf("Завтра %i %i %i", day, month, year);
	return 0;
}
