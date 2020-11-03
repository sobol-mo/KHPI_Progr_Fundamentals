/*
Приклад 10.
Див. Практична робота 4.docx
*/
// Визначення дня тижня за датою	
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day, month, year; // день, місяць, рік
	int c, y; 		// століття и рік в столітті
	int m; 			// місяць по давньоримському календарю
	int d; 			// день тижня

	puts("\nВизначення дня тижня за датою\n");
	puts("Введіть дату: день місяць рік.");
	puts("Наприклад, 5 12 2020\n ");
	printf("->");
	scanf("%i %i %i", &day, &month, &year);

	if (month == 1 || month == 2)
		year--; 	// січень та лютий відносяться
					// до попереднього року

	m = month - 2;		// рік починається з березня
	if (m <= 0)
		m += 12; 	// для січня та лютого
					// m - номер місяцч по римському 
					//календарю
	c = year / 100;
	y = year - c * 100;
	d = (day + (13 * m - 1) / 5 + y + y / 4 + c / 4 - 2 * c + 777) % 7;
	switch (d)
	{
	case 1: puts("Понеділок"); break;
	case 2: puts("Вівторок"); break;
	case 3: puts("Середа"); break;
	case 4: puts("Четвер"); break;
	case 5: puts("П'ятниця"); break;
	case 6: puts("Субота"); break;
	case 0: puts("Неділя"); break;
	}
	return 0;
}
