/*
Приклад 2.
Див. Практична робота 6.docx
*/
// Пошук в масиві методом перебору елементів
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define НВ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int m[НВ]; 		// масив цілих чисел
	int obr; 		// зразок для пошуку
	int found; 		// ознака збігу зі зразком
	printf("\n Пошук в масиві методом перебору \n");
	printf("Введіть однією строкою %i цілих ", НВ);
	printf("чисел и натисніть <Enter>\n");
	printf("->");
	for (int i = 0; i < НВ; i++)
		scanf("%i", &m[i]);
	printf("Введіть зразок для пошуку (ціле число) -> ");
	scanf("%i", &obr);
	// пошук перебором
	found = 0;
	int i = 0; 		 // перевірка з першого елемента масиву
	do
	{
		if (m[i] == obr)
			found = 1; //збіг зі зразком
		else
			i++; // перехід до наступного елементу	
	} while (!found && i < НВ);
	if (found)
		printf("Збіг з елементом номеру %i", i + 1);
	else
		printf("Збігу зі зразком нема");
	return 0;
}
