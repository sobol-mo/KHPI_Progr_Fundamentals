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
		bool A = 1, B = 0, C = 0, Result = 0;
		// a)
		Result = A || B && !C;		// Result = 1
		// �)
		Result = !A && !B;			// Result = 0
		// �)	
		Result = !(A && B) || B;	// Result = 1
		// �)	
		Result = A && !B || C;		// Result = 1
		// �)	
		Result = A && (!B || C);	// Result = 1
		// �)	
		Result = A && (!(B || C));	// Result = 1
	// 3)
		bool X = 0, Y = 1, Z = 0;
		// �)
		Result = X && !(Z || Y) || !Z;	// Result = 1
		// �)
		Result = (!X || !Y) && (X || Y);
		// �)
		Result = X && Y || X && Z || !Z;
	// 4)
		printf("4) \n");
		// �)	!x && !y
		printf("�) !X && !Y \n");
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
		printf("�) Y || !(X && !Y) \n");
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
		// �)	!(x || !y) || !y
		printf("�) F = !(X || !Y) || !Y \n");
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
		// �)	x > 2 �� y > 2;
		x = 3; y = 3;
		Result = (x > 2) && (y > 2);
		// �)	x > 1 ��� y > -2;
		x = 3; y = -3;
		Result = (x > 1) || (y > -2);
		// �)	������, �� x > 2;
		x = 0;
		Result = !(x > 2);
		// �)	������, �� x > 0 �� x < 5;
		x = 0;
		Result = !(x > 0 && x < 5);
		// �)	10 < x <= 20;
		x = 20;
		Result = (x > 10 && x <= 20);
		// �)	x < 5 ��� x > 10;
		x = 0;
		Result = (x < 5 || x > 10);
		// �)	0 < y <= y �� x > 5;
		x = 10; y = 4;
		Result = (y > 0 && y <= 4) && (x > 5);
	// 6)
		// �)	����� � ����� x �� y ����� 100;
		x = 105, y = 105;
		Result = (x > 100) && (y > 100);
		// �)	����� ���� � x �� y �����;
		x = 106, y = 105;
		Result = (x % 2 == 0) || (y % 2 == 0);
		// �)	���� � ���� � x �� y ����� 0;
		x = 106, y = -105;
		Result = x > 0 || y > 0;
		// �)	����� � ����� x, y, z ������ 3;
		x = 6, y = 9, z = 12;
		Result = (x % 3 == 0) && (y % 3 == 0) && (z % 3 == 0);
		// �)	����� ���� � x, y, z ����� 0;
		x = 6, y = 9, z = -12;
		Result = (x < 0) || (y < 0) || (z < 0);
		// �)	x ������ 2 ��� 3;
		x = 9;
		Result = (x % 2 == 0) || (x % 3 == 0);
		// �)	x �� ������ 3 �� ���������� �� 0;
		x = 10;
		Result = (x % 3 != 0) && (x % 10 == 0);


		return 0;
	// ...
}

