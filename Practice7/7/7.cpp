/*
������� 7
�������� ��������, ��� ������� �� ������ � ��������� 
���������� ����� � �������� ���� ���� �������� 
�� ����������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
#include <conio.h>
#define ROW 3 // ������� �����
#define COL 5 // ������� ��������
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[ROW][COL]; // �����
	int s[COL];		 // ���� ��������
	int i, j;
	printf("\n������ �����\n");
	printf("ϳ��� �������� �������� ������� �����,");
	printf("\n%i ����� �����, ���������� <Enter>\n", COL);
	for (i = 0; i < ROW; i++) // ROW �����
	{
		printf("->");
		for (j = 0; j < COL; j++)
			scanf("%i", &a[i][j]);
	}
	printf("\n�������� �����\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%i ", a[i][j]);
		printf("\n");
	}
	// "��������" ����� s
		for (i = 0; i < COL; i++)
			s[i] = 0;
	// �������
	for (j = 0; j < COL; j++) // ��� ������� �������
		for (i = 0; i < ROW; i++) // �������� ��������
			s[j] += a[i][j];
	printf("-----------------------------\n");
	for (i = 0; i < COL; i++)
		printf("%i ", s[i]);	
	printf("\n��� ���������� �������� <Enter>");
	_getch();	
}