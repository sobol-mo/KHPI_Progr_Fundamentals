/*
До практики № 8 по функціям в мовах С/С++.

Приклад 1:
Написати функцію, яка обчислює обсяг циліндра.
V = pi*R2*h
*/
#include <iostream>
#include "windows.h";
using namespace std;
const double pi = 3.14;

double volume(int r, int h)
{
	double v = pi * pow(r, 2) * h;
	return v;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		// Введення початкових даних
		int r, h;
		cout << "Введіть r: ";
		cin >> r;
		cout << "Введіть h: ";
		cin >> h;
		// Друк результату
		cout << "Об'єм дорівнює = " << volume(r, h) 
				<< endl;

		system("pause");
		system("cls");
	}
	return 0;
}