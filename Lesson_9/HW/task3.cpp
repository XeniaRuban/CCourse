#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
int main()
{
	char *my_string = NULL;
	int string_len = 0;
	scanf_s("%d", &string_len);
	my_string = (char *)malloc(sizeof(char)*string_len);
	scanf_s("%s", my_string, string_len);
	for (int i = 0; i <string_len; i++)
	{
		if (my_string[i] != '\0')
			for (int i = 0; i < string_len; i++)   //
				my_string[i] = my_string[i];         //Кто-нибудь, помогите!!! Как можно код пердвинуть на 32?
			printf("%s\n", my_string[i]);
	}
	return 0;
}
