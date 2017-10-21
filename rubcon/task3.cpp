#include "stdafx.h"
#include <math.h>
#define N 3

int main()
{
	int i = 0;
	int vector_a[N];
	int vector_b[N];
	for (i = 0; i < N; i++)
	{
		vector_a[i] = 0;
		vector_b[i] = 0;
	}

	printf("Enter vector A\n");
	for (i = 0; i < N; i++)
		scanf_s("%d", &vector_a[i]);
	
	printf("Enter vector B\n");
	for (i = 0; i < N; i++)
		scanf_s("%d", &vector_b[i]);

	int max_a = 0;
	for (i = 0; i < N; i++)
	{
		if (vector_a[i] > max_a)
			max_a = vector_a[i];
	}

	int max_b = 0;
	for (i = 0; i < N; i++)
	{
		if (vector_b[i] > max_b)
			max_b = vector_b[i];
	}

	printf("%d\n", max_a);

	if (max_a > max_b)
		printf("Awesome! Maximum for vector B less maximum for vector A!");
	return 0;
}
