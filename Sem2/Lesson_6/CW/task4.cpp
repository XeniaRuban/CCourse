#include "stdafx.h"
#include "math.h"


class Vector {
	int _x1;
	int _y1;
	int _x2;
	int _y2;
	int _x3;
	int _y3;
public:
	int add_vector();
	void set_x1(int);
	void set_y1(int);
	void set_x2(int);
	void set_y2(int);
	void set_x3(int);
	void set_y3(int);

};

int Vector::add_vector() {
	int x = ((_x3 - _x2) + (_x2 - _x1));
	int y = ((_y3 - _y2) + (_y2 - _y1));
	int L = sqrt((x * x) + (y * y));
	return L;
}

void Vector::set_x1(int x1) {
	_x1 = x1;
}

void Vector::set_y1(int y1) {
	_y1 = y1;
}

void Vector::set_x2(int x2) {
	_x2 = x2;
}

void Vector::set_y2(int y2) {
	_y2 = y2;
}

void Vector::set_x3(int x3) {
	_x3 = x3;
}

void Vector::set_y3(int y3) {
	_y3 = y3;
}

int main()
{
	Vector my_vector;
	my_vector.set_x1(2);
	my_vector.set_y1(1);
	my_vector.set_x2(5);
	my_vector.set_y2(5);
	my_vector.set_x3(3);
	my_vector.set_y3(-1);
	printf("L = %d\n", my_vector.add_vector());
	return 0;
}
