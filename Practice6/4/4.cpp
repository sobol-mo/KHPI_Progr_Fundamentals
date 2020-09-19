/*
������� 4
� ����������� ������ ��������� ������� ��� �����������
������, ���, ��� � ����� B ��������� ��������, ��������
���� ����� 0, � ����� C - ����� 0, � ����� D - ����� 3
*/
#include <iostream>
#include <time.h> 
#include "windows.h";
using namespace std;
const int N = 5; // ����� ��������� �������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int matr[N][N];
	int B[N * N], C[N * N], D[N * N];
	while (true)
	{
		// ���������� ������� � ���� �� ����
		cout << "��������� �������: " << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				matr[i][j] = rand() % 99 - 50;
				printf("%3i ", matr[i][j]);
			}
			cout << endl;
		}
		cout << endl;
		// ��������� ������������ ������
		for (int i = 0; i < N * N; i++)
		{
			B[i] = 0;
			C[i] = 0;
			D[i] = 0;
		}
		// ����������� ������� ������������ ������
		int iB = 0; // ������ ������ �
		int iC = 0; // ������ ������ C
		int iD = 0; // ������ ������ D
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (matr[i][j] > 0)			
					B[iB++] = matr[i][j];
				else if (matr[i][j] < 0)	
					C[iC++] = matr[i][j];
				if (matr[i][j] % 3 == 0)	
					D[iD++] = matr[i][j];
			}
		}
		// ���� ����������
		printf("B > 0 :\n");
		for (int i = 0; i < iB; i++) 
			printf("%3i ", B[i]);
		printf("\nC < 0 :\n");
		for (int i = 0; i < iC; i++) 
			printf("%3i ", C[i]);
		printf("\nD - ����� 3 :\n");
		for (int i = 0; i < iD; i++) 
			printf("%3i ", D[i]);
		cout << endl;
		getchar();
		system("cls");
	}
	return 0;
}