#include "stdafx.h"

class Circle {
	int _r;
public:
	int get_square();
	void set_r(int);
};

int Circle::get_square() {
	int S = 3.14 * _r * _r;
	return S;
}

void Circle::set_r(int r) {
	_r = r;
}

int main()
{
	Circle my_circle;
	my_circle.set_r(2);
	printf("S = %d\n", my_circle.get_square());
	return 0;
}
