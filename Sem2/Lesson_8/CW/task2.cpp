#include "stdafx.h"
#include <stdlib.h>

class Vehicle {  
protected:
	char *_move;
public:
	virtual char* getMove() = 0;
	virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
	Car() {
		_move = (char*)malloc(10);
		_move = (char*)"Drive";
	}
	char* getMove() { return _move; }
};

class Ship : public Vehicle {
public:
	Ship() {
		_move = (char*)malloc(10);
		_move = (char*)"Swim";
	}
	char* getMove() { return _move; }
};

class Aircraft : public Vehicle {
public:
	Aircraft() {
		_move = (char*)malloc(10);
		_move = (char*)"Fly";
	}
	char* getMove() { return _move; }
};

class Creator {
public:
	virtual Vehicle* factoryMethod() = 0;
};

class CarCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Car(); }
};

class ShipCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Ship(); }
};

class AircraftCreator : public Creator {
public:
	Vehicle * factoryMethod() { return new Aircraft(); }
};

int main()
{
	int flag = 2;
	Vehicle *currentVehicle = NULL;
	if (flag == 1) {
		CarCreator creator;
		currentVehicle = creator.factoryMethod();
	}

	if (flag == 2) {
		ShipCreator creator;
		currentVehicle = creator.factoryMethod();
	}

	if (flag == 3) {
		AircraftCreator creator;
		currentVehicle = creator.factoryMethod();
	}

	printf("Move: %s\n", currentVehicle->getMove());

	delete currentVehicle;

	return 0;
}
