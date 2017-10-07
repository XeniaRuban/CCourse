#include "stdafx.h"

int stepeni(int base, int power)
{
	int result = 1;
	for (int i = 1; i <= power; i++)
	result = result*base;
		return result;
}

int main()
{
	int x = 0;
	int a = 0;
	int myresult = 0;
	printf("Enter x:\n");
	scanf_s("%d", &x);
	printf("Enter a:\n");
	scanf_s("%d", &a);
	myresult = stepeni(x, a);
	printf("Result: %d\n", myresult);
	return 0;
}
