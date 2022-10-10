#pragma once
#include "Dish.h"

class Bacteria
{
	bool isAlive = true;

protected:
	const int xCoordinate;
	const int yCoordinate;
	int distance;

public:
	char sign;
	Bacteria();
	int x, int y)
	//lista inicjalizacyjna
		//: xCoordinate(x), 
		//yCoordinate(y) {}

		void setLifeStatus(bool life);
	bool getLifeStatus();

	virtual bool checkNearby() = 0;

	virtual Bacteria* split() = 0;
};


