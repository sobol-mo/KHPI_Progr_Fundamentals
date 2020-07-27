#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>
#include <iomanip>
const int N = 5;
const int P = 1000;
using namespace std;
using namespace std::chrono;


void shuttle_sorting_1(int B[], int C[]) {
    int A[N];
    /*printf("!!!������ ��� ���������� ���������������!!!   ");*/
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


//��������� ���������� ������������ �������
void shuttle_sorting_2(int C[]) {
    int A[N];
    /*printf("!!!������ ��� ���������� �������������!!!   ");*/
    for (int i = 0; i < N; i++) {
        A[i] = C[i];
        /*printf("%d ", A[i]);*/
    }
    int i, k;
    for (i = 0; i < N - 1; i++) {
        /*if (i != N) {*/
        if (A[i] > A[i + 1])
        {
            int t = A[i];
            A[i] = A[i + 1];
            A[i + 1] = t;
            for (k = i; (A[k] < A[k - 1]) && (k >= 1); k--)
            {
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
//��������� ���������� �������������� ������� � �������� �������
void shuttle_sorting_3(int A[], int C[]) {
    /* printf("!!!������ ��� ���������� ������������� � �������� �������!!!   ");*/
    for (int i = 0; i < N; i++) {
        /*printf("%d ", A[i]);*/
    }
    /*printf("\n");*/
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1])
        {
            int t = A[i];
            A[i] = A[i + 1];
            A[i + 1] = t;
            for (int k = i; (A[k] < A[k - 1]) && (k >= 1); k--)
            {
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
//���������� �������� �������������� �������
void Sub_sorting_1(int B[], int C[]) {

    int A[N];
    /*printf("!!!������ ��� ���������� ���������������!!!   ");*/
    for (int i = 0; i < N; i++) {
        A[i] = B[i];
        /* printf("%d ", A[i]);*/
    }
    /* printf("\n");*/
    int i, k = 5;
    int D[N];
    for (int i = 0; i < k; i++) {
        D[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        D[A[i]] = D[A[i]] + 1;
    }
    i = 0;
    for (int j = 0; j < k; j++) {
        while (D[j] != 0) {
            A[i] = j;
            D[j]--;
            i++;
        }
    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
}
//���������� �������� ������������ �������
void Sub_sorting_2(int C[]) {
    int A[N];
    /*printf("!!!������ ��� ���������� �������������!!!   ");*/
    for (int i = 0; i < N; i++) {
        A[i] = C[i];
        /*printf("%d ", A[i]);*/
    }
    /* printf("\n");*/
    int i, k = 5;
    int D[N];
    for (int i = 0; i < k; i++) {
        D[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        D[A[i]] = D[A[i]] + 1;
    }
    i = 0;
    for (int j = 0; j < k; j++) {
        while (D[j] != 0) {
            A[i] = j;
            D[j]--;
            i++;
        }
    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
}
//���������� �������� ������������ ������� � �������� �������
void Sub_sorting_3(int A[], int C[]) {
    /* printf("!!!������ ��� ���������� ������������� � �������� �������!!!   ");*/
    int i, k = 5;
    int D[N];
    for (int i = 0; i < k; i++) {
        D[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        D[A[i]] = D[A[i]] + 1;
    }
    i = 0;
    for (int j = 0; j < k; j++) {
        while (D[j] != 0) {
            A[i] = j;
            D[j]--;
            i++;
        }
    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
}


int main() {
    setlocale(LC_ALL, "rus");
    //srand(time(NULL));
    int C[N];
    double PP = 0;
    for (int i = 0; i < N; i++) {
        C[i] = 0;
    }
    int B[N];
    printf("��������� ������\n");
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 5;
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("\n");

    //��������� ���������� �������������� �������

    for (int q = 0; q < P; q++) {
        auto start = std::chrono::high_resolution_clock::now();
        shuttle_sorting_1(B, C);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;

        PP += duration.count();
        /*cout << fixed << setprecision(10) << "time1 " << duration.count();
        printf("\n");*/
    }
    PP = PP / P;
    /*printf("����� ��������� ���������� �������������� ������� %.g (�)\n", PP);*/
    cout << fixed << setprecision(10) << "time11 " << PP;
    printf("\n");

    printf("��������� ���������� �������������� �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    printf("\n");
    PP = 0;
    for (int q = 0; q < P; q++) {
        auto start1 = std::chrono::high_resolution_clock::now();
        shuttle_sorting_2(C);
        auto end1 = std::chrono::high_resolution_clock::now();
        _CHRONO_::duration<float> duration1 = end1 - start1;
        PP += duration1.count();
       /* cout << fixed << setprecision(10) << "time2 " << PP << endl;*/

    }
    PP = PP / P;
    cout << fixed << setprecision(10) << "time22 " << PP;
    printf("\n");
    printf("��������� ���������� ������������ �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");


    //��������� �������
    int A[N];
    for (int i = 0; i < N; i++) {
        A[i] = C[i];
    }
    for (int i = 0; i < N - 1; i++) {
        int k;
        if (A[i] < A[i + 1])
        {
            int t = A[i];
            A[i] = A[i + 1];
            A[i + 1] = t;
            for (k = i; (A[k] > A[k - 1]) && (k >= 1); k--)
            {
                t = A[k];
                A[k] = A[k - 1];
                A[k - 1] = t;

            }
        }

    }
    PP = 0;
    for (int q = 0; q < P; q++) {
        for (int i = 0; i < N; i++) {
            //��������� ���������� ������������ ������� � �������� �������
            auto start2 = _CHRONO_::high_resolution_clock::now();
            shuttle_sorting_3(A, C);
            auto end2 = _CHRONO_::high_resolution_clock::now();
            _CHRONO_::duration<float> duration2 = end2 - start2;

        }
    }
    cout << fixed << setprecision(10) << "time2 " << PP;
    printf("\n");
    printf("��������� ���������� ������������ ������� � �������� �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    //���������� �������� �������������� �������
    auto start3 = _CHRONO_::high_resolution_clock::now();
    Sub_sorting_1(B, C);
    auto end3 = _CHRONO_::high_resolution_clock::now();
    _CHRONO_::duration<float> duration3 = end3 - start3;
    printf("���������� �������� �������������� �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    printf("����� ���������� �������� �������������� ������� %.10f (�)\n", duration3.count());
    printf("\n");

    //���������� �������� ������������ �������
    auto start4 = _CHRONO_::high_resolution_clock::now();
    Sub_sorting_2(C);
    auto end4 = _CHRONO_::high_resolution_clock::now();
    _CHRONO_::duration<float> duration4 = end4 - start4;
    printf("���������� �������� ������������ �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    printf("����� ���������� �������� ������������ ������� %.10f (�)\n", duration4.count());
    printf("\n");

    //��������� �������
    printf("!!!������ ��� ���������� �������������!!!   ");

    //���������� �������� ������������ ������� � �������� �������
    auto start5 = _CHRONO_::high_resolution_clock::now();
    Sub_sorting_3(A, C);
    auto end5 = _CHRONO_::high_resolution_clock::now();
    _CHRONO_::duration<float> duration5 = end5 - start5;
    printf("���������� �������� ������������ ������� � �������� �������\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    printf("����� ���������� �������� ������������ ������� � �������� ������� %.10f (�)\n", duration5.count());

}