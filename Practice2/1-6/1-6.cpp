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
		bool A = 1, B = 0, C = 0, Res = 0;
		// a)
		Res = A || B && !C;		// Res = 1
		// б)
		Res = !A && !B;			// Res = 0
		// в)	
		Res = !(A && B) || B;	// Res = 1
		// г)	
		Res = A && !B || C;		// Res = 1
		// д)	
		Res = A && (!B || C);	// Res = 1
		// е)	
		Res = A && (!(B || C));	// Res = 1
	// 3)
		bool X = 0, Y = 1, Z = 0;
		// а)
		Res = X && !(Z || Y) || !Z;	// Res = 1
		// б)
		Res = (!X || !Y) && (X || Y);
		// в)
		Res = X && Y || X && Z || !Z;
	// 4)
		printf("4) \n");
		// а)	!x && !y
		printf("а) !x && !y \n");
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
		printf("б) y || !(x && !y) \n");
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

	// ...
}

