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
