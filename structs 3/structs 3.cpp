// structs 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<stdio.h>



void total(char names[5][15], int runs[5][7])

{

	int sum = 0, i, j;

	for (i = 0; i < 5; i++)

	{

		printf("%s\t\t", names[i]);

		for (j = 0; j < 7; j++)

			sum = sum + runs[i][j];

		printf("%d is total runs\n ", sum);

		sum = 0;

	}

}



void print(char names[5][15], int runs[5][7])

{

	int i, j;

	for (i = 0; i < 5; i++)

	{

		printf("%s\t\t", names[i]);

		for (j = 0; j < 7; j++)

			printf("%d ", runs[i][j]);

		printf("\n");

	}

}



void average(char names[5][15], int runs[5][7])

{

	int i, j;

	for (j = 0; j < 7; j++)

	{

		int sum = 0;

		for (i = 0; i < 5; i++)

			sum = sum + runs[i][j];

		printf("%d is the average of runs on %d day\n", sum / 7, j + 1);

	}

}



void input(char names[5][15], int runs[5][7])

{

	int i, j;

	for (i = 0; i < 5; i++)

	{

		printf("enter the name\n");

		scanf_s("%s", names[i]);

		for (j = 0; j < 7; j++)

		{

			printf("enter runs on %d date\n", j + 1);

			scanf_s("%d", &runs[i][j]);

		}

	}

}

int main()

{

	char names[5][15];

	int runs[5][7];

	input(names, runs);

	print(names, runs);

	total(names, runs);

	average(names, runs);

	return 0;

}
