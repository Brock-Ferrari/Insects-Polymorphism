// Driver File
// Brock Ferrari

#include <iostream>
#include <random>
#include <iomanip>				// For cout.precision()
#include "Insect.h"
#include "Ant.h"
#include "Grasshopper.h"
#include "Beetle.h"
#include "Termite.h"

using namespace std;

int main()
{
	cout.precision(2);							// Sets decimal place to 2
	double size = 0;							
	int selection = 0;
	string color = " ";
	random_device rdevice{};					// Random number generator
	default_random_engine num{ rdevice() };

	Insect* bugs[5];							// Dynamic Insect array

	for (int i = 0; i < 5; ++i)
	{
		cout << endl << "----------------------------------" << endl;
		cout << "Welcome to the Insect Application" << endl << endl;
		cout << "Please enter four insects: " << endl;
		cout << "\t(1) Ant" << endl;
		cout << "\t(2) Grasshopper" << endl;
		cout << "\t(3) Beetle" << endl;
		cout << "\t(4) Termite" << endl;
		cout << "\t(5) Quit Application" << endl;

		cout << endl << "Selection: ";
		cin >> selection;

		switch (selection)						// Switch statement for input
		{
		case 1:
		{
			cout << endl << "You selected an Ant" << endl;

			uniform_real_distribution<double> randomRealNum{ .01,1 };	// Size distribution for ant
			size = randomRealNum(num);		// FROM TXT SEC 13.6

			cout << "\tEnter Ant color:\t";
			cin >> color;
			cout << "\tAnt size:\t\t" << size << " mm" << endl;

			bugs[i] = new Ant(size, color);								// Creates ant object

			break;
		}
		case 2:
		{
			cout << endl << "You selected a Grasshopper" << endl;

			uniform_real_distribution<double> randomRealNum{ 10.5,50.0 };
			size = randomRealNum(num);		// FROM TXT SEC 13.6

			cout << "\tEnter Grasshopper color:\t";
			cin >> color;
			cout << "\tGrasshopper size:\t\t" << size << " mm" << endl;

			bugs[i] = new Grasshopper(size, color);

			break;
		}
		case 3:
		{
			cout << endl << "You selected a Beetle" << endl;

			uniform_real_distribution<double> randomRealNum{ 40.0,75.5 };
			size = randomRealNum(num);		// FROM TXT SEC 13.6

			cout << "\tEnter Beetle color:\t";
			cin >> color;
			cout << "\tBeetle size:\t\t" << size << " mm" << endl;

			bugs[i] = new Beetle(size, color);

			break;
		}
		case 4:
		{
			cout << endl << "You selected a Termite" << endl;

			uniform_real_distribution<double> randomRealNum{ 1.50,5.50 };
			size = randomRealNum(num);		// FROM TXT SEC 13.6

			cout << "\tEnter Termite color:\t";
			cin >> color;
			cout << "\tTermite size:\t\t" << size << " mm" << endl;

			bugs[i] = new Termite(size, color);

			break;
		}
		case 5:
		{
			cout << endl << endl << endl << "Quitting...." << endl << endl << endl;
			return 0;
			break;
		}
		default:
		{
			cout << endl << endl << endl << "Quitting...." << endl << endl << endl;
			return 0;
			break;
		}
		}
	}

	for (Insect* i : bugs)	// Declares Eat() function and printInsect() function for each objects
	{
		i->Eat();
		i->printInsect();
	}

	for (Insect*& i : bugs)	// Deletes every Insect object
	{
		delete i;
		i = nullptr;
	}


	system("pause");
	return 0;
}