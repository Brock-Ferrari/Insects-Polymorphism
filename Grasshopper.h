#pragma once
// Grasshopper Class
// Brock Ferrari

#include <iostream>
#include <string>
#include "Insect.h"

class Grasshopper : public Insect
{
public:
	Grasshopper(double s = 0, std::string c = " ") : Insect(s, c)
	{
		std::cout << "Invoking Grasshopper constructor" << std::endl;
	}
	~Grasshopper()
	{
		std::cout << "Invoking Grasshopper destructor" << std::endl;
	}

	void Eat() override
	{
		std::cout << "As a grasshopper, I eat grass and leaves" << std::endl;
	}

private:
};