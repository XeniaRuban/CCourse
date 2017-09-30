#include "stdafx.h"
#include <math.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("Enter a: ");
	scanf_s("%d\n", &a);
	b = 1;
	for (int i = 1; i <= a; i++) 
	{
		b = b * i;
	}
	printf("Result: \n", b);
	return 0;
}
