#include <iostream>
#include "Cat.h"

using namespace std;


Cat::Cat()
{
	cout << "Cat()..." << endl;
}


Cat::~Cat()
{
	cout << "~Cat()..." << endl;
}

void Cat::voice()
{
	cout << "cat voice..." << endl;
}
