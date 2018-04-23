#pragma once
#include "Planets.h"
///planets that have an elliptical rotation
class Ellipse :
	public Planets
{
protected:
	//the witdth of the semi-major axis 
	double osize_coefficient;
public:
	//the function for changing the location of the planet
	virtual void rotate(double);
	//the constructor, calls the planets constructor and calls rotate(0)
	Ellipse(double, double, double);
	virtual ~Ellipse();
};

