/*
Приклад 7.
Див. Практична робота 4.docx
*/
// Визначення пори року за номером місяця	
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int month; 		// номер місяця
	puts("\n Визначення пори року за номером місяця");
	puts("\n Введіть номер місяця (число від 1 до 12)\n");
	printf("-> ");
	scanf("%i", &month);
	if (month < 1 && month > 12)
		printf("Число повинно бути від 1 до 12");
	else
		if (month >= 3 && month <= 5)
			printf("Becнa");
		else
			if (month >= 6 && month <= 8)
				printf("Літо");
			else
				if (month >= 9 && month <= 11)
					printf("Осінь");
				else
					printf("Зима");
	return 0;
}
