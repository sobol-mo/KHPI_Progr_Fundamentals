/*
Пример 3
Написать функцию, которая вычисляет сопротивление цепи.
Параметры - 2 сопротивления, тип цепи (паралелльная или последовательная)
*/
#include <iostream>

using namespace std;

float R(int R1, int R2, bool t)
{
	int r;
	switch (t)
	{
	case 0: r = R1 * R2 / (R1 + R2);	// для параллельной цеп
		break;
	case 1: r = R1 + R2;				// для последовательной цепи
		break;
	default:
		break;
	}

	return r;
}

int main()
{
	setlocale(LC_ALL, "ru");

	while (true)
	{
		// Печать результатов
		int R1, R2, t;
		cout << "Введите R1: ";
		cin >> R1;
		cout << "Введите R2: ";
		cin >> R2;
		cout << "Введите тип цепи (0 - параллельная, 1 - последовательная) : ";
		cin >> t;

		cout << "Сопротивление цепи = " << R(R1, R2, t) << endl;

		system("pause");
		system("cls");
	}
	return 0;
}