#pragma once
// Ant Class
// Brock Ferrari

#include <iostream>
#include <string>
#include "Insect.h"

class Ant : public Insect
{
public:
	Ant(double s = 0, std::string c = " ") : Insect(s, c)	// Calls Insect constructor
	{
		std::cout << "Invoking Ant constructor" << std::endl;
	}
	~Ant()
	{
		std::cout << "Invoking Ant destructor" << std::endl;
	}

	void Eat() override					// Overrides the Eat function in Insect
	{
		std::cout << "As an ant, I eat everything" << std::endl;
	}

private:
};