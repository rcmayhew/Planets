#include "stdafx.h"
#include "Ellipse.h"


Ellipse::Ellipse(double size, double t, double o) : Planets(size, t)
{
	osize_coefficient = o;
	//sets the location for the planet at time 0 to initalize the planet
	rotate(0);
}

void Ellipse::rotate(double time)
{	//x = a * cos(t)
	//y = b * sin(t)
	//when t = time
	location = std::make_pair<double, double>
		(osize_coefficient * cos(time),
		size_coefficient * sin(time));
}

Ellipse::~Ellipse()
{
}
