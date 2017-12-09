#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

struct student {
	char name[20];
	char surname[30];
	float average_rating;
	int birthday;
	int id;
};

int main() 
{ 
	FILE*file;
	char buffer[BUFFER_SIZE];
    struct student best_student;
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\students.txt", "r");
	if (err)
		printf_s("The file students.txt was not opened\n");
	else
	{
		int line_id = 1;
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) {

			if(line_id == 1)
			{
				strcpy_s(best_student.name, buffer);
			}
			if (line_id == 2)
			{
				strcpy_s(best_student.surname, buffer);
			}
			if (line_id == 3)
			{
				best_student.average_rating = atof(buffer);
			}
			if (line_id == 4)
			{
				best_student.birthday = atoi(buffer);
			}
			if (line_id == 5)
			{
				best_student.id = atoi(buffer);
			}
			line_id++;		
		}
	}
	fclose(file);

	printf("Name: %s\n", best_student.name);
	printf("Surname: %s\n", best_student.surname);
	printf("average_rating: %s\n", best_student.average_rating);
	printf("Birthday: %d\n\n", best_student.birthday);
	printf("ID: %d\n", best_student.id);

	return 0; 
}  
