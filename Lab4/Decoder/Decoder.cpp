/******************************************************/
/*           ������������ ������ #4 (����� 2)         */
/*                 ���������� ����                    */
/*            ������ ����������. ������� #30.         */
/******************************************************/
#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; /* ��� ��������� */
	unsigned short f; /* ������� ������ */
	unsigned short b; /* ������� ��������� */
	unsigned short n; /* ���������� ���� */
	unsigned short int UnitStateWord; /* ����� ��������� */
								/* ���� ����� ��������� ���������� */
	printf("������� c���� ��������� ���������� \n");
	printf("(16-������ ����� �� 0 �� 0xFFFF) >");
	scanf_s("%hx", &UnitStateWord);
	/* ��������� ��������� ������ */
	c = (UnitStateWord >> 11) & 0x1F;
	f = (UnitStateWord >> 9) & 1;
	b = (UnitStateWord >> 8) & 1;
	n = UnitStateWord & 0xFF;
	/* ����� ����������� */
	putchar('\n');
	printf("��� ���������              = %hu\n", c);
	printf("������� ������             = %hu\n", f);
	printf("������� ���������          = %hu\n", b);
	printf("���������� ���������� ���� = %hu\n", n);
	return 0;
}