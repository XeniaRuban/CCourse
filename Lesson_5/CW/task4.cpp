#include "stdafx.h"

int fact(int base)
{
	int result = 1;
	for (int i = 1; i <= base; i++)
	result = result*i;
		return result;
}

int main()
{
	int x = 0;
	int myresult = 0;
	printf("Enter x:\n");
	scanf_s("%d", &x);
	myresult = fact(x);
	printf("Result: %d\n", myresult);
	return 0;
}
