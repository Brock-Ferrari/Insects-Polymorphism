#pragma once
// Insect Class
// Brock Ferrari

#include <iostream>
#include <string>

class Insect
{
public:
	Insect(double s = 0, std::string c = " ")	// Insect constructor
	{
		std::cout << "Invoking Insect constructor" << std::endl;
		setSize(s);
		setColor(c);
	}
	virtual ~Insect()							// Insect destructor
	{
		std::cout << "Invoking Insect destructor" << std::endl;
	}
	void setSize(double s) { size = s; }
	void setColor(std::string c) { color = c; }
	double getSize() { return size; }
	std::string getColor() { return color; }

	virtual void Eat() = 0;						// Purely virtual

	void printInsect()
	{
		std::cout << "\tSize:\t" << size << " mm" << std::endl << "\tColor:\t" << color << std::endl << std::endl;
	}

private:
	double size{ 0 };
	std::string color;
};