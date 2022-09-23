#pragma once
// Termite Class
// Brock Ferrari

#include <iostream>
#include <string>
#include "Insect.h"

class Termite : public Insect
{
public:
	Termite(double s = 0, std::string c = " ") : Insect(s, c)
	{
		std::cout << "Invoking Termite constructor" << std::endl;
	}
	~Termite()
	{
		std::cout << "Invoking Termite destructor" << std::endl;
	}

	void Eat() override
	{
		std::cout << "As a termite, I eat wood" << std::endl;
	}

private:
};