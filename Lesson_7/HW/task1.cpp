
#include "stdafx.h"
#include <stdlib.h>
int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	printf("Enter massive:\n",);
	ptr_v = (int *)malloc(vector_size * sizeof(int));
	int a = 0;
	int b = 0;
	for (int i = 0; i < vector_size; i++)
		a = ptr_v[i];

	for (int i = 0; i < vector_size; i++)
	    ptr_v[i] = ptr_v[i];
	for (int i = 0; i < vector_size; i++)
		printf("%d\n",);
	free(ptr_v);
	return 0;
}
