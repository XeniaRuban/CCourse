#include "stdafx.h"
#include <math.h>
#define N 10
#define M 10
int main()
{
	float matrix[N][M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrix[i][j] = sinf(i)*j;
	
		int k = 0;
	printf("If you'll enter '0', program will print lines; if you'll enter '1', program will print columns.");
	scanf("%d", &k);
	if (k == 1)
	{
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < M; j++)
			int vector[j] = 0;
	   if (vector[j] > max)
				max = vector[j];
	}
	printf("Max:\n", max);
	}
	else {
		int max = 0;
		for (int i = 0; i < N; i++)
		{
			printf("\n");
			for (int j = 0; j < M; j++)
				int vector[i] = 0;
				if (vector[i] > max)
					max = vector[i];
		}
		printf("Max:\n", max);
	}
}
