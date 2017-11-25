#include "stdafx.h"
#include <string.h>
#define BUFFER_SIZE 1024
int main()
{
	FILE *file;
	char string_first[BUFFER_SIZE];
	char string_second[BUFFER_SIZE] = "test";

	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\file.txt", "r");
	if (err)
		printf_s("The file file.txt was not opened\n");
	else
		while (fgets(string_first, BUFFER_SIZE, file) != NULL) {
			if(strstr(string_first, string_second) != 0)
				printf("%s\n", string_first);
		}
	return 0;
}
