#include "stdafx.h" #include <math.h>

int main() {

int selector = 1;
int M = 0;
int N = 0;
int current_month = 0;
int current_year = 0;
int bd_month = 0;
int bd_year = 0;
printf("current_month\n");
scanf_s("%d", &current_month);
printf("current_year\n");
scanf_s("%d", &current_year);
printf("bd_month\n");
scanf_s("%d", &bd_month);
printf("bd_year\n");
scanf_s("%d", &bd_year);
printf("Enter print type:\n");
scanf_s("%d", &selector);
N = current_month - bd_month;
M = current_year - bd_year;
if (N < 0)
{
	M = M - 1;
	N = 12 + N;
}
switch (selector)
{
case 0:
	printf("%d - month\n", 12 * M + N);
	break;
case 1:
	printf("%d - years, %d - month\n", M, N);
	break;
default:
	break;
}
return 0;
}
