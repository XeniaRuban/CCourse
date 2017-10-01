#include "stdafx.h"
#include "iostream"
#include <clocale>
void disp_binary(int u);

int main()
{
	int a = 0;
	printf("Enter a (0 to 255): ");
	scanf_s ("%d",&a);
	printf("Binary а:");
	disp_binary(a);
	system("pause");
	return 0;
}

void disp_binary(int u)
{
	register int i;
	for (i = 128; i>0; i = i / 2)
		if (u&i) printf("1");
		else printf("0");
		printf("\n");
}
