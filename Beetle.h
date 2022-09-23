#pragma once
// Beetle Class
// Brock Ferrari

#include <iostream>
#include <string>
#include "Insect.h"

class Beetle : public Insect
{
public:
	Beetle(double s = 0, std::string c = " ") : Insect(s, c)
	{
		std::cout << "Invoking Beetle constructor" << std::endl;
	}
	~Beetle()
	{
		std::cout << "Invoking Beetle destructor" << std::endl;
	}

	void Eat() override
	{
		std::cout << "As a beetle, I eat plants and other small insects" << std::endl;
	}

private:
};