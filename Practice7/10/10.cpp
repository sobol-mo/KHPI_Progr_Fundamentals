/*
������� 10
10)	�������� ��������, ��� ��������, �� � ������� �
��������� ��������� ������� �������� ���������.
������� ������-��� ���������� �������, � ��� ���� �����
� ������� ��������������� ����, � ������� �������������
� �� ������ � ��������� ���� � �� �, �� ��������
�� ���.:
2 9 4		13 8 12 1
7 5 3		2 11 7 14
6 1 8		3 10 6 15
			16 5 9 4
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
#define SZ 5 // ������������ ����� �������
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[SZ][SZ];	// �������
	int n;			// ����� ������� �� ������������ 
	int ok;			// ������� - "�������" �������"
	int i, j;		// ������� ������
	int sum;		// ���� �������� ������� �������
	int temp;		// ���� �������� ��������� �����, 
					// ���������
					// ��� ������ ������� �������
	printf("*** ��ò���� ������� ***\n");
	printf("\n������ ����� ������� (3..%i) -> ", SZ);
	scanf("%i", &n);
	printf("������ ����� �������\n");
	printf("ϳ��� �������� ����� %i ����� �����, ", n);
	printf("���������� <Enter>\n");
	for (i = 0; i < n; i++)
	{
		printf("->");
		for (j = 0; j < n; j++)
			scanf("%i", &a[i][j]);
	}
	ok = 1; // ����� ������� - "�������" �������
	// ��������� ���� �������� ������� �������
	sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i][i];
	// ���������� ���� �� ������
	i = 0;
	do {
		temp = 0; // ���� �������� ��������� �����
		for (j = 0; j < n; j++)
			temp += a[i][j];
		if (temp != sum) ok = 0;
		i++;
	} while (ok && i < n);
	if (ok)
	{
		// ��� ���� �������� ������� �����
		// ������� ��� �������� ������� �������
		// ���������� ���� �� ��������
		j = 0;
		do {
			temp = 0; // ���� ��-�� ��������� �������
			for (i = 0; i < n; i++)
				temp += a[i][j];
				if (temp != sum) ok = 0;
			j++;
		} while (ok && i < n);
	}
	if (ok) {
		// ��� ���� �������� ������� �����
		// ������� ��� �������� ������� �������
		// � ��� �������� ������� �������.
		// ��������� ���� �������� �����
		// ������� �������
		temp = 0;
		i = n - 1;
		for (j = 0; j < n; j++)
			temp += a[i--][j];
		if (temp != sum) ok = 0;
	}
	printf("������� ������� ");
	if (!ok)
		printf("�� ");
	printf("� ������� ���������.\n");
	printf("\n��� ���������� ��������� <Enter>");
	getchar();
}