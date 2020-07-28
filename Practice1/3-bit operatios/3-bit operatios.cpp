/*
	К практике по основным арифметическим операциям
	Побитовые операции
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// 8
	{
		unsigned short x = 0x3, y = 0x2, z = 0x1;
		//a
		x = x | y & z;
		cout << x << "\n";	//11bin 3dec
		//b
		x = x | y & ~z;
		cout << x << "\n";	//11bin 3dec
		//c
		x = x ^ y & ~z;		
		cout << x << "\n";	//01bin 1dec
		//d
		x = 3;
		x = x & y && z;
		cout << x << "\n";	//01bin 1dec true
	}
	// 9
	{
		//a
		unsigned char x = 1; // 8 bit
		x = !x | x;
		cout << x << "\n";	//01bin 1dec true
		//b
		x = x | ~x;
		cout << x << "\n";	/*
						   ~0000 0001
							---------
							1111 1110
						|
							0000 0001
							---------
							1111 1111 = 255 dec
							*/
		//c
		x = 1;
		x = x ^ x;
		cout << x << "\n";	//00bin 0dec
		//d
		x = 1;
		x = x << 3;
		cout << x << "\n";	//1000bin 8dec
		//e
		unsigned char y = 6, z = 7; // 8 bit
		x = 5;
		x = x & y | z;
		cout << x << "\n";	//0111bin 7dec
	}

}

