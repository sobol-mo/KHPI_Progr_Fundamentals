/*
	��������� ������ 2
	��ò�Ͳ �����ֲ� �� ��в������

	������ 1 (7) - 6 (13)
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	// 1)
		int x = 2, y = 1, z = 0;
		// �)
		x = x && y || z;		// x = 1
		// �)
		x = x || !y && z;		// x = 1
		// �)	
		x = y = 1; 
		z = x++ - 1;			// x = 2
								// y = 1
								// z = 0
		// �)	
		z += -x++ + ++y;		// x = 3
								// y = 2
								// z = 0;
	// 2)
		bool A = 1, B = 0, C = 0, Res = 0;
		// a)
		Res = A || B && !C;		// Res = 1
		// �)
		Res = !A && !B;			// Res = 0
		// �)	
		Res = !(A && B) || B;	// Res = 1
		// �)	
		Res = A && !B || C;		// Res = 1
		// �)	
		Res = A && (!B || C);	// Res = 1
		// �)	
		Res = A && (!(B || C));	// Res = 1
	// 3)
		bool X = 0, Y = 1, Z = 0;
		// �)
		Res = X && !(Z || Y) || !Z;	// Res = 1
		// �)
		Res = (!X || !Y) && (X || Y);
		// �)
		Res = X && Y || X && Z || !Z;
	// 4)
		printf("4) \n");
		// �)	!x && !y
		printf("�) !x && !y \n");
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
		// �)	y || !(x && !y)
		printf("�) y || !(x && !y) \n");
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

