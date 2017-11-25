#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));

	FILE *file;
	int value = 0;
	int vector_size = 0;

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\file.txt", "w");
	if (err)
		printf_s("The file file1.txt was not opened\n");
	else
	{
		scanf_s("%d", &vector_size);
			
		for (int i = 0; i < vector_size; i++)
		{
			value = rand() % 201 - 100;

			fprintf_s(file, "%d\n", value);
		}

	}
	fclose(file);
	return 0;
}
