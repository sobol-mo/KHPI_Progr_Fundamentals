/*
	Расчет продолжительности выполнения того или иного действия в программе
*/

#include <iostream>
#include <iomanip>      // std::setprecision
#include <chrono>

//#include "windows.h"

using namespace std;

#define M 10	// Количество циклов
#define N 5	// Размер массива

void shuttle_sorting_1(int B[], int C[]) {
    int A[N];
    /*printf("!!!Массив для сортировки неупорядоченный!!!   ");*/
    for (int i = 0; i < N; i++) {
        A[i] = B[i];

    }
    /* printf("\n");*/
     /*int k, i, j;
     int t;*/
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1])
        {
            int t = A[i];
            A[i] = A[i + 1];
            A[i + 1] = t;
            for (int k = i; (A[k] < A[k - 1]) && (k >= 1); k--) {
                t = A[k];
                A[k] = A[k - 1];
                A[k - 1] = t;

            }
        }

    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    double dur_arr[M];
    int B[N];
    int C[N];
    double aver_dur = 0;
    printf("Начальный массив\n");
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 5;
        printf("%d ", B[i]);
    }
    printf("\n");


	for (int i = 0; i < M; i++)
	{
		//system("pause");
		//Sleep(1000);

		auto start = std::chrono::high_resolution_clock::now();

        shuttle_sorting_1(B, C);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		//std::cout << "Duration " << i << " = " << duration.count() << "s\n";
		dur_arr[i] = duration.count();
	}

	// Вывод результата
	for (int i = 0; i < M; i++)
	{
		std::cout << fixed << setprecision(10) << "Duration " << i << " = " << dur_arr[i] << "s\n";
        if (i > 0) aver_dur += dur_arr[i];
	}
    std::cout << "Duration a" << " = " << aver_dur / (M-1) << "s\n";
    printf("Конечный массив\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
	

}

