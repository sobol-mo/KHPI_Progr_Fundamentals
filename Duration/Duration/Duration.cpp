/*
	Расчет продолжительности выполнения того или иного действия в программе
*/

#include <iostream>
#include <chrono>
//#include "windows.h"

#define M 100	// Количество циклов
#define N 20	// Номер числа Фибоначчи


long fibonacci(unsigned n)
{
	if (n < 2) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	//const int arr_size = 100;	// Количество циклов
	double dur_arr[M];
	long F = 0;
	double aver_dur = 0;
	
	for (int i = 0; i < M; i++)
	{
		//system("pause");
		//Sleep(1000);

		auto start = std::chrono::high_resolution_clock::now();

		//std::cout << "f(" << N << ") = " << fibonacci(N) << '\n';
		F = fibonacci(N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		//std::cout << "Duration " << i << " = " << duration.count() << "s\n";
		dur_arr[i] = duration.count();
	}

	// Вывод результата
	for (int i = 0; i < M; i++)
	{
		std::cout << "Duration "<< i << " = " << dur_arr[i] << "s\n";
		if (i > 0) aver_dur += dur_arr[i];
	}
	std::cout << "Duration a" << " = " << aver_dur / (M - 1) << "s\n";
	std::cout << "f(" << N << ") = " << F << '\n';

}

