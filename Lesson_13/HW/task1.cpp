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
	int result = 1;
	result = sqrtf(((x - x0)^2) + ((y - y0)^2));
	return result;
			}

int main()
{
	FILE *file;
	char buffer[BUFFER_SIZE];

	errno_t err = fopen_s(&file, "C:\\Users\\ч\\Desktop\\cloud.txt", "r");
    
	if (err)
		printf_s("The file cloud.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
			printf("%s", buffer);


	            struct point point;
			{
				point.x = atof(buffer);
				point.y = atof(buffer);
			}			
				float distance(float x, float y);
			float x0, y0 = 0;
			printf("X0 = ");
			scanf("%d", &x0);
			
			printf("Y0 = ");
			scanf("%d", &y0);

		}
	}

	fclose(file);
	return 0;
}
