#include <math.h>
#include <time.h>
#include "Street.h"
#include "Directions.h"
#include "Point.h"
#pragma once

#define PI 3.14159265

class StreetFactory
{
public:
	StreetFactory();
	~StreetFactory();

	Street createStreetFromPoint(Point, int, int);
	Street createStreetFromPoint(int, int, int, int);

private:

	Point getPointOnLine(Street);
	float calculateSlope(Point, Point);
	int getPossibleXValue(Street);
};

