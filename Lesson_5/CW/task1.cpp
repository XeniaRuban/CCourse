#include "stdafx.h"


int main()
{
	int a = 0;
	int	count = 0;
while (1)
{	printf("Vvedite luboe chislo:");
	scanf_s("%d", &a);
	for (int i = 2; i<a; i++) {
		if (a%i == 0) count++;
	}
	if (count == 0)
		printf("Chislo prostoe\n");
	else
		printf("Chislo ne prostoe\n");
	if (a == 0)
		break;
}	return 0;
}
