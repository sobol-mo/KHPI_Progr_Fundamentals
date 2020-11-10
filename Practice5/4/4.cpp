/*
Приклад 4.
Див. Практична робота 5.docx
*/
// Середнє арифметичне дрібних чисел, які вводяться з кла-віатури
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"		
using namespace std;
#define L 5 		// кількість чисел послідовності
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a;		// число
	int n;			// кількість введених чисел
	float sum;		// сума введених чисел
	float sred;		// середнє арифметичне введених чисел
	printf("\nОбробка послідовності дрібних чисел\n");
	printf("Після введення кожного числа ");
	printf("натисніть < Enter > \n");
	sum = 0;
	for (n = 1; n <= L; n++)
	{
		printf("-> ");
		scanf("%f", &a);
		sum += a;
		printf("Введено чисел : % i ", n);
		printf("Сумма: %6.2f\n", sum);
		sred = sum / n;
		printf("Середнє арифметичне: %6.2f\n", sred);
	}
	return 0;
}
