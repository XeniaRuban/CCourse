#include "stdafx.h"
#include <stdlib.h>
void print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", array[i]);
}
int sum_array (int *array, int size, int begin, int end)
{
	int sum = 0;
	for (int i = begin; i < end; i++)
		sum = sum + array[i];
	return sum;
}
int main()
{
	int *рtr_v = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	int vector_begin = 0;
	scanf_s("%d", &vector_begin);
	int vector_end = 0;
	scanf_s("%d", &vector_end);
	рtr_v = (int *)malloc(vector_size * sizeof(int));
	for (int i = 0; i < vector_size; i++)
		рtr_v[i] = i;
	print_array(рtr_v, vector_size);
	printf("%d\n", sum_array(рtr_v, vector_size, vector_begin, vector_end));
	return 0;
}
