#pragma once
#include <utility>

class Planets
{
protected:
	std::pair <double, double> location;
public:
	virtual void rotate(double) = 0;
	Planets();
	virtual ~Planets();
};

