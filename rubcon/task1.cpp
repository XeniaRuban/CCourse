#include "stdafx.h"
#include <math.h>

int main()
{
	int x0 = 0;
	printf("Enter x0\n");
	scanf_s("%d", &x0);
	int y0 = 0;
	printf("Enter y0\n");
	scanf_s("%d", &y0);
	int R = 0;
	printf("Enter R\n");
	scanf_s("%d", &R);
	int x = 0;
	printf("Enter x\n");
	scanf_s("%d", &x);
	int y = 0;
	printf("Enter y\n");
	scanf_s("%d", &y);
	int dx = abs(x - x0);
	int dy = abs(y - y0);
	int rad = sqrtf(dx*dx + dy*dy);
	if (R >= rad)
		printf("Point is property of round.\n");
	else printf("Point isn't property of round.\n");
	return 0;
}
