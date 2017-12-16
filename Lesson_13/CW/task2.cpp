#include "stdafx.h"
#include <stdlib.h>
struct student {
	char name[20];
	char surname[30];
	int id;
	float average_rating;
	int birthday;
};

void print_student_info(struct student student_info)
{
	printf("Name: %s\n", student_info.name);
	printf("Surname: %s\n", student_info.surname);
	printf("ID: %d\n", student_info.id);
	printf("Rating: %f\n", student_info.average_rating);
	printf("Birthday: %d\n", student_info.birthday);
}

void update_student_info(struct student *student_info)
{
	scanf_s("%20s", student_info->name, 20);
	scanf_s("%20s", student_info->surname, 20);
	scanf_s("%d", &student_info->id);
	scanf_s("%f", &student_info->average_rating);
	scanf_s("%d", &student_info->birthday);
}


int main()
{
	

	struct student *student_info;

	int size = 0;
	scanf_s("%d", &size);
	student_info = (student *)malloc(sizeof(student)*size);
		
	FILE *file;
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\students.txt", "a+");
	while (1)
	{
		if (student_info[0].id == 0)
			break;
		printf("debug\n");

		scanf_s("%20s", student_info[0].name, 20);
		scanf_s("%30s", student_info[0].surname, 30);
		scanf_s("%d", &student_info[0].id);
		scanf_s("%f", &student_info[0].average_rating);
		scanf_s("%d", &student_info[0].birthday);
		print_student_info(student_info[0]);


		fprintf_s(file, "%s ", student_info[0].name);
		fprintf_s(file, "%s ", student_info[0].surname);
		fprintf_s(file, "%d ", student_info[0].id);
		fprintf_s(file, "%f ", student_info[0].average_rating);
		fprintf_s(file, "%d\n", student_info[0].birthday);

		update_student_info(&student_info[0]);
	}
	fclose(file);
	return 0;
}
