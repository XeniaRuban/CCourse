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
	int result = 0;
	int a = 1;
	int b = 1;
	while (1)
	{
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		result = NOD(b, a);
		if (result != 1 && result != b)
			printf("A///B: %d\n", result);
	}
	return 0;
}
//Вроде всё правильно, но всё-таки... При вводе 15 и 25 выдаёт НОД = 10
