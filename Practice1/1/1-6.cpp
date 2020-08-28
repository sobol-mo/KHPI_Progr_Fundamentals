/*
	К практике по основным арифметическим операциям
*/

// Что будет выведено на печать

#include "pch.h"
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	{// 1)
		int x = (7 + 6) % 5 / 2;	// x = 1
		//			1	2	3
		printf("1) x = %d \n", x);
	}
	{// 2)
		int x = -3 * 4 % -6 / 5;	// x = 0
		//		1	3  4  2	5
		printf("2) x = %d \n", x);
	}
	{// 3)
		int x = 2, y = 1, z = 3;
		x *= 8 / 2 + y++ + ++z;		// x = 18
		printf("3) x = %d \n", x);
		// буде: y = 2, z = 4, x = 18
	}
	{// 4)
		int m = 2, x = 2, y, z;
		x *= y = z = 4 / m;			// x = 4
		printf("4) x = %d \n", x);
		// буде: m = 2, x = 4, y = 2, z = 2
	}
	{// 5)
		int x = 2, y, z;
		x *= 3 + 2;					// a) x = 10
		x *= y = z = 4;				// б) x = 40
									//	  y = 4
									//	  z = 4
		x = y == z;					// в) x = 1
		// 2   1
		x = x == (y = z);			// г) x = 0
		// (1 == 4)?				// false (=0)
		printf("5) г) x = %d \n", x);
	}
	{// 6)
		int z = 1, x = 2, y = 3;
		z = 3 * x++ - --y;			// z = 4
		printf("6) z = %d \n", z);
		// буде: x = 2, y = 2, z = 4
	}
	return 0;
}


