/*
Приклад 4
Написати функцію, яка виводить рядок з заданого символу
заданої довжини
*/
#include <iostream>
#include "windows.h";
using namespace std;

void print_string(int lng, char c)
{
	for (int i = 0; i < lng; i++)
	{
		cout << c;
	}
	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		// Введення початкових даних
		int lng;
		char ch;
		cout << "Введіть символ: ";
		cin >> ch;
		cout << "Введіть довжину рядка: ";
		cin >> lng;
		// Друк результату
		cout << "Рядок : " << endl;
		print_string(lng, ch);

		system("pause");
		system("cls");
	}
	return 0;
}