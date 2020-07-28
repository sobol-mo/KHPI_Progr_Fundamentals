/*
	К практике по основным арифметическим операциям
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// 3
	{
		int x = 2, y = 1, z = 3;
		x *= 8 / 2 + y++ + ++z;
		cout << x << "\n";
	}
	// 4
	{
		int m = 2, x = 2, y, z;
		x *= y = z = 4 / m;
		cout << x << "\n";
	}
	// 5
	{
		int x = 2, y, z;
		x *= 3 + 2;	//a 
		x *= y = z = 4; //б
		cout << x << "\n";
	}

}


