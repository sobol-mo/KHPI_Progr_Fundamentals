/*
Приклад 10.
Див. Практична робота 6.docx
*/
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define N 11
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[N];	   	// вхідний масив
	int i_ins;		// індекс елементу, що вставляється
	int vol; 		// елемент, що вставляється
	printf("\n Вставка заданого елемента в масив\n");
	printf("Введіть масив з %i цілих чисел)-> ", N - 1);
	for (int i = 0; i < N - 1; i++)
		scanf("%i", &a[i]);
	printf("Який елемент треба вставити -> ");
	scanf("%i", &vol);
	printf("На яку позицію (введіть індекс)-> ");
	scanf("%i", &i_ins);
	for (int i = N; i > i_ins; i--) // перезаписати в масив 
		a[i] = a[i - 1];	// всі елементи, починаючи з 					
							// останнього, до позиції
							// на яку треба вставити
	a[i_ins] = vol;		//вставити на позицію i_ins
						//елемент vol
	printf("Новий масив -> ");
	for (int i = 0; i < N; i++)
		printf("%i ", a[i]);
	return 0;
}
