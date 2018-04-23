#pragma once
#include "Planets.h"
class Circle :
	public Planets
{
public:
	// the function for changing the location of the planet
	virtual void rotate(double);
	// the constructor, calls the planets constructor and calls rotate(0)
	Circle(double, double);
	virtual ~Circle();
};

