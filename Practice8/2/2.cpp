/*
Приклад 2
Написати функцію, яка порівнює два числа і виводить 
знак порівняння
*/
#include <iostream>
#include "windows.h";
using namespace std;

char Sr(int a, int b)
{
	char rez;
	if (a > b) rez = '>';
	else if (a < b) rez = '<';
	else rez = '=';
	return rez;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		// Введення початкових даних
		int a, b;
		cout << "Введіть a: ";
		cin >> a;
		cout << "Введіть b: ";
		cin >> b;
		// Друк результату
		cout << "a " << Sr(a, b) << " b" << endl;
		
		system("pause");
		system("cls");
	}
	return 0;
}