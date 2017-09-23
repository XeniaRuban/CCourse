// task1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float x1 = 0;
	float x2 = 0;
	printf(" Enter a\n");
	scanf_s("%f", &a);
	printf(" Enter b\n");
	scanf_s("%f", &b);
	printf(" Enter c\n");
	scanf_s("%f", &c);
	d = sqrtf((4 * a * c) - (b * b));
	x1 = (- b + d) / (2 * a);
	x2 = (- b - d) / (2 * a);
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
	return 0;
}
