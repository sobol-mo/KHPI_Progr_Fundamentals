/*
Приклад 9.
Див. Практична робота 6.docx
*/
// Видалення заданого елементу масиву
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define N 10
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[N];	   	// вхідний масив
	int i_del;		// індекс елементу, що видаляється
	printf("\n Видалення заданого елементу масиву \n");
	printf("Введіть масив (%i цілих чисел)-> ", N);
	for (int i = 0; i < N; i++)
		scanf("%i", &a[i]);
	printf("Який елемент треба видалити (введіть індекс)->");
	scanf("%i", &i_del);
	for (int i = i_del; i < N - 1; i++) // перезаписати в масив
		a[i] = a[i + 1];	// всі елементи, після того, 
							// який видаляємо
	printf("Новий масив -> ");
	for (int i = 0; i < N - 1; i++)
		printf("%i ", a[i]);
	return 0;
}
