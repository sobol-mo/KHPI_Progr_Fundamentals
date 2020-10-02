﻿/*
Приклад 12
Написати програму, яка обробляє результати спортивних
змагань: вишиковує команди відповідно до кількості
набраних очок, яка обчислюється за формулою
К = 7NG + 6NS + 5NB, де NG, NS і NB- кількість золотих,
срібних і бронзових медалей. Нижче наведено рекомендований
вид екрану програми (дані, введені користувачем, виділені
напівжирним).

Введіть в одному рядку кількість золотих, срібних
і бронзових медалей
Австрія-> 0 1 1
Німеччина-> 1 0 2
Норвегія-> 4 2 1
Україна-> 2 3 2
Фінляндія-> 1 2 2
----------------------------------
  Команда		Зол.	Сер.	Бр.	Всього	Очок
1 Норвегія		4		2		1	7		45
2 Україна		2		3		2	7		42
3 Фінляндія		1		2		2	5		29
4 Німеччина		1		0		2	3		17
5 Австрія		0		1		1	2		11

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"
#define NC 5 // число команд
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char team[5][11];
	strcpy(team[0], "Австрия\0");
	strcpy(team[1], "Германия\0");
	strcpy(team[2], "Норвегия\0");
	strcpy(team[3], "Україна\0");
	strcpy(team[4], "Финляндия\0");
	// таблиця результатів
	int result[NC + 1][6];
	// result[i][0] - золотих
	// result[i][1] - срібних
	// result[i][2] - бронзових
	// result[i][3] - всього
	// result[i][4] - очок
	// result[i][5] - номер команди
	// NC + 1-й рядок використовується як буфер
	// при сортуванні таблиця
	int i, j;
	int max; // номер рядка таблиці, в якій
	// кількість очок максимально
	printf("Введіть в одному рядку");
	printf("кількість золотих,\n");
	printf("cepeбpяних і бронзових медалей\n");
	// введення початкових даних
	for (i = 0; i < NC; i++)
	{
		printf("%s ->", team[i]);
		scanf("%i%i%i", &result[i][0], // золотих
			&result[i][1],	// срібних
			&result[i][2]); // бронзовых
		result[i][5] = i;	// номер команди
	}
	// обчислимо загальну кількість медалей і очок
	for (i = 0; i < NC; i++)
	{
		result[i][3] =
			result[i][0] + result[i][1] + result[i][2];
		result[i][4] =
			result[i][0] * 7 + result[i][1] * 6 +
			result[i][2] * 5;
	}
	// сортування рядків (методом простого вибору)
	// відповідно до кількості очок
	for (i = 0; i < NC + 1; i++)
	{
		// в частині таблиці, починаючи з рядка i,
		// знайти j-й рядок, в якій елемент
		// result[j][5] максимальний
		max = i; // нехай це рядок з номером i
		for (j = i + 1; j < NC; j++)
		{
			if (result[j][4] > result[max][4])
				max = j;
		}
		// поміняємо місцями i-й рядок co рядком
		// з номером max
		// в якості буфера використовуємо останній
		// рядок таблиці
		for (j = 0; j < 6; j++)
			result[NC][j] = result[i][j];
		for (j = 0; j < 6; j++)
			result[i][j] = result[max][j];
		for (j = 0; j < 6; j++)
			result[max][j] = result[NC][j];
	}
	// тут таблиця впорядкована
	printf("%3s%12s%8s%8s%8s%8s%8s",
		"", "Команда",
		"Золото", "Срібло", "Бронза",
		"Всього", "Очок");
	for (i = 0; i < NC; i++)
	{
		printf("\n%12s", team[result[i][5]]);
		for (j = 0; j < 5; j++)
			printf("%8i", result[i][j]);
	}
	printf("\nДля завершення натисніть <Enter>");
	getchar();
}