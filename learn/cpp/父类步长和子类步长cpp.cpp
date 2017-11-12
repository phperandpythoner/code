/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Parent {
public:
	Parent(int a)
	{
		this->a = a;
	}
	virtual void print()
	{
		cout << this->a << endl;
	}
	int a;
};

class Child :public Parent {
public:
	Child(int a) :Parent(a)
	{

	}
	virtual void print()
	{
		cout << this->a << endl;
	}
	int b;
};

int main()
{
	Child array[] = { Child(0), Child(1), Child(2) };

	Parent *pp = &array[0];
	Child *cp = &array[0];

	//pp->print();
	//cp->print();

#if 0
	pp++;
	cp++;
	pp->print();
	cp->print();
#endif
	int i = 0;
	for (cp = &array[0], i = 0; i < 3; cp++, i++)
	{
		cp->print();
	}

	system("pause");
	return 0;
}
*/