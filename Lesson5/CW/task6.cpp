//functions.h
#pragma once
#include "stdafx.h"
#define PI 3.14
void print_numbers(int N);
int max(int a, int b);

//functions.cpp
#include "stdafx.h"
#include "functions.h"
void print_numbers(int N)
{
	for (int i = 0; i < N; i++)
		printf("%d\n", i);
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

//MAIN PROGRAM
#include "stdafx.h"
#include "functions.h "
int main()
{
	int value_1 = 0;
	int value_2 = 0;
	int result = 0;
	scanf_s("%d", &value_1);
	scanf_s("%d", &value_2);
	result = max(value_1, value_2);
	printf("Max: %d\n", result);
}
