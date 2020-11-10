/*
Приклад 5.
Див. Практична робота 5.docx
*/
// Перетворення десяткового числа в двійкове   
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"     	
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int dec;		// десяткове число
	int v;			// вага формованого розряду
	int i;			// номер формованого розряду
	printf("\Перетворення десяткового числа в двійкове \n");
	printf("Введіть ціле число від 0 до 255 ");
	printf("і натисніть < Enter> -> ");
	scanf("%i", &dec);
	printf("Десятковому числу %i відповідає двійкове ", dec);
	v = 128; 		// вага старшого (восьмого) розряду
	for (i = 1; i <= 8; i++)
	{
		if (dec >= v)
		{
			printf("1");
			dec -= v;
		}
		else
			printf("0");
		v = v / 2; 		// вага наступного розряду 
						// в два рази менше
	}
	return 0;
}
