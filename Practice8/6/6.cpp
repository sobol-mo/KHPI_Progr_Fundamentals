/*
Приклад 6
Написати функцію, яка досліджує можливість 
вирішення квад-ратного рівняння і видає:
2 - якщо коренів 2
1 - якщо корінь 1
0 - якщо дискримінант меньше 0
-1 - якщо помилка вихідних даних (а = 0)
*/
#include <iostream>
#include "windows.h";
using namespace std;

int KU(float a, float b, float c)
{
	float d = 1.;
	if (a == 0) return -1;	// не вирішуємо, так як 
							// не знаходимо х1 і х2
	d = b * b - 4 * a * c;
	if (d < 0) return 0;
	else if (d == 0) return 1;	// т.е. х1 = х2
	else return 2;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, c;
	while (true)
	{
		// Введення початкових даних
		cout << "Введіть a, b, c :" << endl;
		cin >> a >> b >> c;

		// Друк результату
		switch (KU(a, b, c))
		{
		case -1: cout << "Помилка вихідних даних";
			break;
		case  0: cout << "D < 0, немає коренів"; break;
		case  1: cout << "D = 0, x1 = x2"; break;
		case  2: cout << "2 кореня"; break;
		}
		cout << endl;

		system("pause");
		system("cls");
	}
	return 0;
}