#pragma once
#include <utility>
#include <string>
#include <math.h>

typedef std::pair<double, double> Group;

class Planets
{
protected:
	//the location of the planet
	Group location;
	//the ratio of time to speed
	double t_coefficient;
	//the size of the rotation
	double size_coefficient;
public:
	//plug in the time input and changes the location preportional to the rotation
	virtual void rotate(double) = 0;
	//constructo, is called by the other inherited classes
	Planets(double, double);
	//print the location
	std::string print();
	//give the location
	Group locate_planet();
	virtual ~Planets();
};

