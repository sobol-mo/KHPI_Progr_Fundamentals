/*
Приклад 3
Написати функцію, яка обчислює опір ланцюга. 
Параметри функції: 2 опору, тип ланцюга (паралельне 
з’єднання або послідовне)
*/
#include <iostream>
#include "windows.h";
using namespace std;

float R(int R1, int R2, bool type)
{
	int r;
	switch (type)
	{
	// для паралельного ланцюга
	case 0: r = R1 * R2 / (R1 + R2);	
		break;
	// для послідовного ланцюга
	case 1: r = R1 + R2;				
		break;
	default:
		break;
	}
	return r;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		// Введення початкових даних
		int R1, R2, type;
		cout << "Введіть R1: ";
		cin >> R1;
		cout << "Введіть R2: ";
		cin >> R2;
		cout << "Введіть тип ланцюга (0 - паралельний, ";
		cout << "1 - послідовний):";
		cin >> type;
		// Друк результату
		cout << "Опір ланцюга = " << R(R1, R2, type)
			<< endl;

		system("pause");
		system("cls");
	}
	return 0;
}