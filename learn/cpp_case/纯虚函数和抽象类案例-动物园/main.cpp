#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
using namespace std;

int main()
{
	//Animal *cat = new Cat;
	//cat->voice();

	//Animal *dog = new Dog;
	//dog->voice();

	AnimalCry(new Cat);

	//AnimalCry(new Dog);

	system("pause");
	return 0;
}