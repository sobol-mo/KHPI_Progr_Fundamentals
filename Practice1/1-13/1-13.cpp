/*
	К практике 1 для пособия по основным арифметическим операциям
	*задачи на % и /
	задачи 7(2) -
*/

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
	{// 7)
		short a = 52, dec = 0, ed = 0;
		dec = a / 10;				// dec = 5
		ed = a % 10;				// ed = 2
		a = dec * 10 + ed;			// перевірка
		printf("7) dec = %d \n", dec);
		printf("    ed = %d \n", ed);
	}
	{// 8)
		short a = 352, sot = 0, dec = 0, ed = 0;
		sot = a / 100;				// sot = 3
		dec = a % 100 / 10;			// dec = 5
		ed = a % 10;				// ed = 2
		a = ed * 100 + dec * 10 + sot;
		printf("8) a = %d \n", a);
	}
	{// 9)
		short a = 25, dec = 0, ed = 0;
		dec = a / 10;		// dec = 5
		ed = a % 10;		// ed = 2
		a = ed * 10 + dec;	// 52
		printf("9) a = %d \n", a);
	}
	{// 10)
		short a = 352, dec = 0, ed = 0;
		dec = a % 100;		// dec = 52
		ed = a / 100;		// ed = 3
		a = dec * 10 + ed;	// a = 523
		printf("10) a = %d \n", a);
	}
	{// 11)
		short a = 352, dec = 0, ed = 0;
		dec = a / 10;		// dec = 35
		ed = a % 10;		// ed = 2
		a = ed * 100 + dec;	// a = 235
		printf("11) a = %d \n", a);
	}
	{// 12)
		short x = 352, dec = 0, ed = 0;
		// а)
		ed = x % 10;		// ed = 2
		x = x - ed;			// x = 350
		// б)
		x = x / 10;			// x = 35
		// в)
		x = ed * 100 + x;	// x= 235
		// або
		x = 352;
		x = (x % 10) * 100 + (x - x % 10) / 10;
		printf("12) x = %d \n", x);
	}
	{// 13)
		short x = 352, sot = 0, dec = 0, ed = 0;
		sot = x / 100;		// sot = 3
		dec = x % 100 / 10;	// dec = 5
		ed = x % 10;		// ed = 2
		x = dec * 100 + sot * 10 + ed;	// x = 532
		// або
		x = 352;
		x = (x % 100 / 10) * 100 + (x / 100) * 10 + x % 10;
		printf("13) x = %d \n", x);
	}
	return 0;
}