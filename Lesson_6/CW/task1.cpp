#include "stdafx.h"

int NOD(int var1, int var2)

{
	int var = var1%var2;
	while (var != 0)
	{
		if (var1 > var2)
			var1 = var1%var2;
		else
			var2 = var1%var2;
		var = var1%var2;
	}
	return var2;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int result = NOD(a, b);
	printf("NOD: %d\n", result);
	return 0;
}

