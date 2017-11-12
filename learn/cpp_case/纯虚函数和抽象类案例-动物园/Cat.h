#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();

	virtual void voice();
};

