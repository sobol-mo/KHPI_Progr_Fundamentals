/******************************************************/
/*           ������������ ������ �4 (����� 1)         */
/*                   �������� ����                    */
/*            ������ ����������. ������� �30.         */
/******************************************************/
#include <iostream>
#include "windows.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; /* ��� ��������� */
	unsigned short f; /* ������� ������ */
	unsigned short b; /* ������� ��������� */
	unsigned short n; /* ���������� ���� */
	unsigned short int UnitStateWord; /* ����� ��������� */
								/* ���� ��������� ������ */
	printf("������� ��� ��������� (0 - 31) >");
	scanf_s("%hu", &c);
	printf("������� ������� ������ (0 / 1) >");
	scanf_s("%hu", &f);
	printf("������� ������� ��������� (0 / 1) >");
	scanf_s("%hu", &b);
	printf("������� ���������� ���������� ���� (0 - 255) >");
	scanf_s("%hu", &n);
	/* ������������ ������������ ���� */
	UnitStateWord = (c & 0x1F) << 11;
	UnitStateWord |= (f & 1) << 9;
	UnitStateWord |= (b & 1) << 8;
	UnitStateWord |= n & 0xFF;
	/* ����� ���������� */
	printf("\n����� ��������� ���������� = %04x\n",
		UnitStateWord);
	return 0;
}