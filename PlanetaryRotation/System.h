#pragma once
#include "Planets.h"
#include <unordered_map>
typedef std::unordered_map <std::string, Planets> Solar;
class System
{
protected:
	//holds all the planets
	Solar solar_system;
	//makes sure that the planet is in the solar system
	bool found(Planets a);
public:
	System();
	~System();
};

