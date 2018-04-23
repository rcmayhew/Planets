#include "stdafx.h"
#include "Circle.h"


Circle::Circle(double size, double t) : Planets(size, t)
{
	rotate(0);
}

void Circle::rotate(double time)
{
	// x = a * cos(t)
	// y = a * sin(t)
	// when t = time and a = size_coefficient
	location = std::make_pair <double, double>
		(size_coefficient * cos(time), size_coefficient * sin(time));
}
Circle::~Circle()
{
}
