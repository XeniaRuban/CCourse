#include "stdafx.h"
#include <math.h>

int main()
{
	int x = 0;
	int a = 0;
	int y = 0;
	printf("Enter x:\n");
	scanf_s("%f\n", &x);
	printf("Enter a:\n");
	scanf_s("%f\n", &a);
	y = pow(x,a);
	printf("y: %f\n", y);
	return 0;
}
