//for 1024
#include "stdafx.h"

int main()
{
	int my_var = 1;
	int result = ((((((((((my_var << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1);
	printf("%d\n", result);
	return 0;
}

//for 64
#include "stdafx.h"

int main()
{
	int my_var = 1;
	int result = ((((((my_var << 1) << 1) << 1) << 1) << 1) << 1);
	printf("%d\n", result);
	return 0;
}

//for 17
#include "stdafx.h"

int main()
{
	int my_var = 1;
	int result = ((((my_var << 1) << 1) << 1) << 1) | 1;
	printf("%d\n", result);
	return 0;
}

//for 15
#include "stdafx.h"

int main()
{
	int my_var = 1;
	int result = ((((my_var << 1) << 1) << 1) << 1) - 1;
	printf("%d\n", result);
	return 0;
}

//for 5
#include "stdafx.h"

int main()
{
	int my_var = 1;
	int result = ((my_var << 1) << 1) | 1;
	printf("%d\n", result);
	return 0;
}
