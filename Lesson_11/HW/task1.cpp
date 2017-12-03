#include "stdafx.h"
#include <stdlib.h>
#define MATRIX_SIZE N

int main()
{
	FILE *file;
	int N = 0;
	errno_t err = fopen_s(&file, "E:\\Users\\ч\\Desktop\\matrix_N.txt", "r");
	if (err)
		printf_s("The file matrix_N.txt was not opened\n");
	else
	{
		while (fscanf_s(file, "%s %d") != EOF)
			N = N + 1;
		float **matrix2d;
		matrix2d = (float **)malloc(MATRIX_SIZE * sizeof(float *));
		for (int i = 0; i < MATRIX_SIZE; i++)
			matrix2d[i] = (float *)malloc(MATRIX_SIZE * sizeof(float));
		for (int i = 0; i < MATRIX_SIZE; i++)
			for (int j = 0; j < MATRIX_SIZE; j++)
				matrix2d[i][j] = matrix2d[j][i];
		for (int i = 0; i < MATRIX_SIZE; i++)
		{
			for (int j = 0; j < MATRIX_SIZE; j++)
				printf("%f\t", matrix2d[i][j]);
			printf("\n");
		}
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     	fclose(file);
 	return 0;
}
