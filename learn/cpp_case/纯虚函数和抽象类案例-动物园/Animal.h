#pragma once
class Animal
{
public:
	Animal();
	virtual ~Animal();

	virtual void voice() = 0;
};

//�ܹ�����
void AnimalCry(Animal *animal);