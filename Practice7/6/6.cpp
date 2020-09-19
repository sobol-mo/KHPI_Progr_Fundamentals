/*
������� 6
��������� ������ ������������ ������� �������� 
� ������� �������.
*/
#include <iostream>
#include <time.h> 
#include "windows.h";
using namespace std;
// ��������� ��������� ������ 
const int numRows = 3;
const int numCols = 4;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int matr[numRows][numCols];
	while (true)
	{
		int Sum[numRows];
		int Pr[numCols];
		// ���������� ������� � ���� �� ����
		cout << "��������� ������� " << numRows 
			<< "x" << numCols << ":" << endl;
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numCols; j++)
			{
				matr[i][j] = rand() % 10 - 5;
				printf("%3i ", matr[i][j]);
			}
			cout << endl;
		}
		cout << endl;
		// ����������� ������ �������
		for (int j = 0; j < numCols; j++) Pr[j] = 1;
		// ϳ�������� �������
		int max = INT_MIN;
		for (int j = 0; j < numCols; j++)
		{
			for (int i = 0; i < numRows; i++) 
				Pr[j] *= matr[i][j];
			if (Pr[j] > max) max = Pr[j];
		}
		// ���� ����������
		printf("����� ������� �������� ");
		printf("� ������� �������:\n");
		for (int j = 0; j < numCols; j++) 
			printf("%3i ", Pr[j]);
		printf("\n");
		printf("����������� �������� ������� : %i", max);
		printf("\n");
		getchar();
		system("cls");
	}
	return 0;
}