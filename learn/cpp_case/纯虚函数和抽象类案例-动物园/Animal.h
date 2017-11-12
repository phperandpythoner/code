#pragma once
class Animal
{
public:
	Animal();
	virtual ~Animal();

	virtual void voice() = 0;
};

//¼Ü¹¹º¯Êý
void AnimalCry(Animal *animal);