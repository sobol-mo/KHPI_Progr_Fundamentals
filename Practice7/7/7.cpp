/*
Приклад 7
Написати програму, яка вводить по рядках з клавіатури 
двовимірний масив і обчислює суму його елементів 
по стовпчиках.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
#include <conio.h>
#define ROW 3 // кількість рядків
#define COL 5 // кількість стовпців
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[ROW][COL]; // масив
	int s[COL];		 // сума елементів
	int i, j;
	printf("\nВведіть масив\n");
	printf("Після введення елементів кожного рядка,");
	printf("\n%i цілих чисел, натискайте <Enter>\n", COL);
	for (i = 0; i < ROW; i++) // ROW рядків
	{
		printf("->");
		for (j = 0; j < COL; j++)
			scanf("%i", &a[i][j]);
	}
	printf("\nВведений масив\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%i ", a[i][j]);
		printf("\n");
	}
	// "очистимо" масив s
		for (i = 0; i < COL; i++)
			s[i] = 0;
	// обробка
	for (j = 0; j < COL; j++) // для кажного стовбца
		for (i = 0; i < ROW; i++) // підсумуємо елементи
			s[j] += a[i][j];
	printf("-----------------------------\n");
	for (i = 0; i < COL; i++)
		printf("%i ", s[i]);	
	printf("\nДля завершення натисніть <Enter>");
	_getch();	
}