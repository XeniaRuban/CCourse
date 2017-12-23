#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#define BUFFER_SIZE 1024

struct point
{
	float x;
	float y;
};

struct cloud
{
	struct point points[10];
};

float distance(struct point point1, struct point point2)
{
	float result = 1;
	result = sqrtf((point1.x - point2.x)*(point1.x - point2.x) + (point1.y - point2.y)*(point1.y - point2.y));
	return result;
}

int main()
{
	FILE *file;
	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\cloud.txt", "r");

	struct cloud my_cloud;

	if (err)
		printf_s("The file cloud.txt was not opened\n");
	else
	{
		int point_idx = 0;
		while (fscanf_s(file, "%f %f", &my_cloud.points[point_idx].x, &my_cloud.points[point_idx].y) != EOF) {
			point_idx++;
		}

		float X0, Y0 = 0;
		printf("X0: ");
		scanf_s("%f", &X0);
		printf("Y0: ");
		scanf_s("%f", &Y0);
		struct point new_point;
		new_point.x = X0;
		new_point.y = Y0;

		for (int i = 0; i < 10;i++)
		{
			printf("Point[%d]: x=%f y=%f\n", i, my_cloud.points[i].x, my_cloud.points[i].y);

			float delta = 0;
			delta = distance(my_cloud.points[i], new_point);
			printf("Distance: %f\n", delta);
		}
	}

	fclose(file);
	return 0;
}
