/*
������� 5
��������� ���������� ���� �������� � ������� �����,
� ������� �������� � ������� ������� ��������� ������
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
		// ����������� ������ ���
		for (int i = 0; i < numRows; i++) Sum[i] = 0;
		// ����������� ������ �������
		for (int j = 0; j < numCols; j++) Pr[j] = 1;
		// ϳ�������� ����
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numCols; j++) 
				Sum[i] += matr[i][j];
		}
		// ϳ�������� �������
		for (int j = 0; j < numCols; j++)
		{
			for (int i = 0; i < numRows; i++) 
				Pr[j] *= matr[i][j];
		}
		// ���� ����������
		printf("����� ��� �������� ");
		printf("� ������� �����:\n");
		for (int i = 0; i < numRows; i++) 
			printf("%3i\n", Sum[i]);
		printf("����� ������� �������� ");
		printf("� ������� �������:\n");
		for (int j = 0; j < numCols; j++) 
			printf("%3i ", Pr[j]);
		printf("\n");
		getchar();
		system("cls");
	}
	return 0;
}