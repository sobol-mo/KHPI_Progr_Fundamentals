/*
	К практике 1 для пособия по основным арифметическим операциям
	*задачи на % и /
	задачи 7(2) - 
*/

#include <iostream>
int main()
{	
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