#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

int main()
{
	FILE *file;
	char buffer[BUFFER_SIZE];
	errno_t err = fopen_s(&file, "C:\\Users\\ч\\Desktop\\transactions.txt", "r");
	if (err)
		printf_s("The file wasn't opened\n");
	else
	{

		float average_price = 0;
		int n = 0;
		int max_number = 0;
		int min_number = 1000;
		while (fgets(buffer, BUFFER_SIZE, file) != NULL)
		{
			printf_s("%s", buffer);
			int count = 0;
			int price = 0;
			int number = 1;
			for (int i = 0; i < strlen(buffer); i++)
			{
				if (buffer[i] == ';')
				{
					printf_s("Position: %d\n", i);
					count++;
				}
				if (count == 1 && buffer[i] != ';')
				{
					price = price * 10 + (buffer[i] - 48);
				}
				if (buffer[i] == ',')
				{
					number = number++;
					count++;
				}

			}
			average_price = average_price + price;
			printf_s("Price: %d\n", price);
			n++;
			printf_s("Number: %d\n", number);

			if (number > max_number)
				max_number = number;

			if (number < min_number)
				min_number = number;


		}
		average_price = average_price / n;
		printf_s("Average price: %f\n", average_price);

		printf_s("Max_number: %d\n", max_number);
		printf_s("Min_number: %d\n", min_number);
		
		char description[BUFFER_SIZE];
		printf_s("Enter Name of product: ");
		scanf("&s\n", description);
		while (fgets(description, BUFFER_SIZE, file) != NULL)
		{
			if (strstr(buffer, description) != 0)
				printf_s("%s\n", buffer);
		}
	}

	fclose(file);
	return 0;
}
