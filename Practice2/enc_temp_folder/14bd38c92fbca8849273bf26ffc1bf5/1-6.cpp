/*
	ѕрактична робота 2
	Ћќ√≤„Ќ≤ ќѕ≈–ј÷≤ѓ “ј ѕќ–≤¬ЌяЌЌя

	задачи 1 (7) - 6 (13)
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	// 1)
		int x = 2, y = 1, z = 0;
		// а)
		x = x && y || z;		// x = 1
		// б)
		x = x || !y && z;		// x = 1
		// в)	
		x = y = 1; 
		z = x++ - 1;			// x = 2
								// y = 1
								// z = 0
		// г)	
		z += -x++ + ++y;		// x = 3
								// y = 2
								// z = 0;
	// 2)
		bool A = 1, B = 0, C = 0, Result = 0;
		// a)
		Result = A || B && !C;		// Result = 1
		// б)
		Result = !A && !B;			// Result = 0
		// в)	
		Result = !(A && B) || B;	// Result = 1
		// г)	
		Result = A && !B || C;		// Result = 1
		// д)	
		Result = A && (!B || C);	// Result = 1
		// е)	
		Result = A && (!(B || C));	// Result = 1
	// 3)
		bool X = 0, Y = 1, Z = 0;
		// а)
		Result = X && !(Z || Y) || !Z;	// Result = 1
		// б)
		Result = (!X || !Y) && (X || Y);
		// в)
		Result = X && Y || X && Z || !Z;
	// 4)
		printf("4) \n");
		// а)	!x && !y
		printf("а) !X && !Y \n");
		printf("| X | Y | !X | !Y | !X && !Y |\n");
		X = 0; Y = 0;
		printf("| %d | %d |  %d |  %d |     %d    |\n",
			X, Y, !X, !Y, !X && !Y);
		X = 0; Y = 1;
		printf("| %d | %d |  %d |  %d |     %d    |\n",
			X, Y, !X, !Y, !X && !Y);
		X = 1; Y = 0;
		printf("| %d | %d |  %d |  %d |     %d    |\n",
			X, Y, !X, !Y, !X && !Y);
		X = 1; Y = 1;
		printf("| %d | %d |  %d |  %d |     %d    |\n",
			X, Y, !X, !Y, !X && !Y);
		// б)	y || !(x && !y)
		printf("б) Y || !(X && !Y) \n");
		printf("| X | Y | !Y | X && !Y | !(X&&!Y) | Y || !(X&&!Y) |\n");
		X = 0; Y = 0;
		printf("| %d | %d |  %d |    %d    |     %d    |       %d       |\n",
			X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));
		X = 0; Y = 1;
		printf("| %d | %d |  %d |    %d    |     %d    |       %d       |\n",
			X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));
		X = 1; Y = 0;
		printf("| %d | %d |  %d |    %d    |     %d    |       %d       |\n",
			X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));
		X = 1; Y = 1;
		printf("| %d | %d |  %d |    %d    |     %d    |       %d       |\n",
			X, Y, !Y, X && !Y, !(X && !Y), Y || !(X && !Y));
		// в)	!(x || !y) || !y
		printf("в) F = !(X || !Y) || !Y \n");
		printf("| X | Y | !Y | X || !Y | !(X||!Y) | F |\n");
		X = 0; Y = 0;
		printf("| %d | %d |  %d |    %d    |     %d    | %d |\n",
			X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);
		X = 0; Y = 1;
		printf("| %d | %d |  %d |    %d    |     %d    | %d |\n",
			X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);
		X = 1; Y = 0;
		printf("| %d | %d |  %d |    %d    |     %d    | %d |\n",
			X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);
		X = 1; Y = 1;
		printf("| %d | %d |  %d |    %d    |     %d    | %d |\n",
			X, Y, !Y, X || !Y, !(X || !Y), !(X || !Y) || !Y);
	// 5)
		// а)	x > 2 та y > 2;
		x = 3; y = 3;
		Result = (x > 2) && (y > 2);
		// б)	x > 1 або y > -2;
		x = 3; y = -3;
		Result = (x > 1) || (y > -2);
		// в)	нев≥рно, що x > 2;
		x = 0;
		Result = !(x > 2);
		// г)	нев≥рно, що x > 0 та x < 5;
		x = 0;
		Result = !(x > 0 && x < 5);
		// д)	10 < x <= 20;
		x = 20;
		Result = (x > 10 && x <= 20);
		// е)	x < 5 або x > 10;
		x = 0;
		Result = (x < 5 || x > 10);
		// ж)	0 < y <= y та x > 5;
		x = 10; y = 4;
		Result = (y > 0 && y <= 4) && (x > 5);
	// 6)
		// а)	кожне з чисел x та y б≥льше 100;
		x = 105, y = 105;
		Result = (x > 100) && (y > 100);
		// б)	т≥льки одне з x та y парне;
		x = 106, y = 105;
		Result = (x % 2 == 0) || (y % 2 == 0);
		// в)	хоча б одне з x та y б≥льше 0;
		x = 106, y = -105;
		Result = x > 0 || y > 0;
		// г)	кожне з чисел x, y, z кратне 3;
		x = 6, y = 9, z = 12;
		Result = (x % 3 == 0) && (y % 3 == 0) && (z % 3 == 0);
		// д)	т≥льки одне з x, y, z менше 0;
		x = 6, y = 9, z = -12;
		Result = (x < 0) || (y < 0) || (z < 0);
		// е)	x кратне 2 або 3;
		x = 9;
		Result = (x % 2 == 0) || (x % 3 == 0);
		// ж)	x не кратне 3 та зак≥нчуЇтьс€ на 0;
		x = 10;
		Result = (x % 3 != 0) && (x % 10 == 0);


		return 0;
	// ...
}

