/*
������� 9
�������� ��������, ��� �������� ���������� ������.
��� ���-�� ������ �������� ������� ��������� �������
�� �������� �����-�� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n[6];   // ������� �����, ... �'�����
	int s = 0;  // ������ ������
	float p[6]; // ������� ����� ������
	char mes[6][10];
	strcpy(mes[0], "\0");
	strcpy(mes[1], "\0");
	strcpy(mes[2], "�����\0");
	strcpy(mes[3], "�����\0");
	strcpy(mes[4], "�������\0");
	strcpy(mes[5], "�'�����\0");
	int i;
	puts("������� ���������� ������");
	puts("������ �������� ���:");
	for (i = 5; i >= 2; i--)
	{
		printf("%s ->", mes[i]);
		scanf("%i", &n[i]);
		s += n[i];
	}
	// ��������� ������� ����� ������
	for (i = 2; i < 6; i++)
		p[i] = (float)n[i] / s * 100;
	puts("���������� ������");
	puts("------------------------------");
	for (i = 5; i >= 2; i--)
		printf("%8s %2i   %2.0f%% \n", mes[i], n[i], p[i]);
	puts("------------------------------");
	puts("��� ���������� �������� <Enter>");
	getchar();
}