/*
Приклад 3
Необхідно знайти мінімальний і максимальний 
елементи дові-льної матриці і переставити їх місцями.
*/
#include <iostream>
#include <iomanip> // для форматування виводу cout
#include "windows.h";
using namespace std;
const int N = 10;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int mass[N][N], max, min;
	// Заповнення матриці і вивід на друк
	cout << "Початкова матриця: " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mass[i][j] = rand() % 99 - 50;
			cout.setf(ios::fixed);
			cout << setw(3) << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	max = mass[0][0];
	min = mass[0][0];
	int imax, jmax, imin, jmin;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (max < mass[i][j])
			{
				max = mass[i][j];
				imax = i;
				jmax = j;
			}
			if (min > mass[i][j])
			{
				min = mass[i][j];
				imin = i;
				jmin = j;
			}
		}
	cout << "Min[" << imin << "][" << jmin << "] " 
		<< min << endl;
	cout << "Max[" << imax << "][" << jmax << "] " 
		<< max << endl;
	// Заміна місцями
	int t = mass[imax][jmax];
	mass[imax][jmax] = mass[imin][jmin];
	mass[imin][jmin] = t;
	// Друк матриці з заміною
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout.setf(ios::fixed);
			cout << setw(3) << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}