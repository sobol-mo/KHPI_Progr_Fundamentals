/*
Приклад 9.
Див. Практична робота 4.docx
*/
// Виводить цифрову оцінку	
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char oc; 		// оцінка у вигляді літери
	puts("\n Виводить цифрову оцінку\n");
	puts("\nBведіть оцінку у вигляді літери (А .. Е) ");
	printf(" ->");
	scanf("%c", &oc);
	puts("\nВаша оцінка –");
	switch (oc)
	{
	case 'A': puts(" 5 "); break;
	case 'B': puts(" 4 "); break;
	case 'C': puts(" 3 "); break;
	case 'D': puts(" 2 "); break;
	case 'E': puts(" 1 "); break;
	default:
		puts("Оцінка повинна бути в діапазоні А .. Е\n");
	}
	return 0;
}
