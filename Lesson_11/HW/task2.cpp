//Вариант 5
#include "stdafx.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024
int main()
{
	FILE *file;
	char buffer[BUFFER_SIZE];
	errno_t err = fopen_s(&file, "C:\\Users\\ч\\Desktop\\array2.txt", "r");
	if (err)
		printf_s("The file array2.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) 
		{
			int temp;
			for (int i = 0; i < BUFFER_SIZE - 1; i++) {
				for (int j = 0; j < BUFFER_SIZE - i - 1; j++) {
					if (buffer[j] > buffer[j + 1]) {
						temp = buffer[j];
						buffer[j] = buffer[j + 1];
						buffer[j + 1] = temp;
					}
				}
			}
			printf("%s", buffer);
		}
	}
	fclose(file);
	return 0;
}
