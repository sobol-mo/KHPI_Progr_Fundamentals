/*
Приклад 11.
Див. Практична робота 6.docx
*/
// Пошук позитивних послідовностей
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;
#define N 12
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[N];	// вхідний масив
	int fl;		// прапорець знаходження в послідовності
	int dl; 	// довжина послідовності
	int NP; 	// індекс послідовності
	printf("\n Пошук позитивних послідовностей \n");
	printf("Введіть масив з %i цілих чисел)-> ", N);
	for (int i = 0; i < N; i++)
		cin >> a[i];		//оператор введення
	fl = 0;				//початкові значення
	dl = 0;
	for (int i = 0; i < N - 1; i++)
	{	//умова знаходження в середині послідовності
		if (a[i] > 0 && a[i + 1] > 0 && fl)
			dl++;
		// умова знаходження на початку послідовності
		if (a[i] > 0 && a[i + 1] > 0 && !fl)
		{
			dl++;
			NP = i;
			fl = 1;
		}
		// умова виходу з послідовності
		if (a[i] > 0 && a[i + 1] <= 0 ||
			a[i] > 0 && a[i + 1] > 0 && i + 1 == N - 1)
		{
			dl++;
			//оператор виведення
			cout << "NP = " << NP << " dl = ";
			cout << dl << endl;
			fl = 0;
			dl = 0;
		}
	}
	return 0;
}
