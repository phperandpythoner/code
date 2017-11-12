#include <iostream>
#include "Animal.h"
using namespace std;


Animal::Animal()
{
	cout << "Animal()..." << endl;
}


Animal::~Animal()
{
	cout << "~Animal()..." << endl;
}

void AnimalCry(Animal *animal)
{
	animal->voice();
	if (animal != NULL)
	{
		delete animal;
	}
}
