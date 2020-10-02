/*
Приклад 5
Написати функцію, яка знаходить факторіали чисел
від 0 до 8
*/
#include <iostream>
#include "windows.h";
using namespace std;

unsigned int fact(int x)
{
	unsigned int f = 1;
	for (int i = 2; i <= x; i++)
	{
		f *= i;
	}
	return f;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		// Введення початкових даних
		unsigned int x;
		cout << "Введіть число: ";
		cin >> x;
		// Друк результату
		cout << "Факторіал " << x << " = " 
			<< fact(x) << endl;
		// Друк факторіалів чисел від 0 до 8
		cout << "Факторіали чисел від 0 до 8 " << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << i << "! = " << fact(i) << endl;
		}

		system("pause");
		system("cls");
	}
	return 0;
}