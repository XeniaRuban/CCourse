#include "stdafx.h"


int main()
{
	int i = 0;
	int s = 0;
	for (i = 1; i <= 100; s += i, i++);
	printf("Sum -> %d\n", s);
	return 0;
}
