#include "stdafx.h"
#include "Lemniscate.h"


Lemniscate::Lemniscate(double size, double t) : Planets(size, t)
{
	rotate(0);
}

void Lemniscate::rotate(double time)
{
	// x = (a * (2)^(1/2) * cos(t))			/ (sin(t)^2 + 1)
	// y = (a * (2)^(1/2) * cos(t) * sin(t)) / (sin(t)^2 + 1)
	// when t = time and a = size_coefficient
	location = std::make_pair <double, double>
		((size_coefficient * pow(2, 0.5) * cos(time)) / (pow(sin(time), 2) + 1),
		(size_coefficient * pow(2, 0.5) * cos(time) * sin(time)) / (pow(sin(time), 2) + 1));
}


Lemniscate::~Lemniscate()
{
}
