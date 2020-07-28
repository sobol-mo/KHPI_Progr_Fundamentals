/*
	К практике по основным арифметическим операциям
	Логические операции и сравнение
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// 7
	{
		int x = 2, y = 1, z = 0;
		//a 
		x = x && y || z;
		cout << x << "\n"; //1
		//b
		x = x || !y && z;
		cout << x << "\n"; //1
		//c
		x = y = 1;
		z = x++ - 1;
		cout << z << "\n"; //0
		//d
		z += -x++ + ++y;
		cout << z << "\n"; //0
	}

}

