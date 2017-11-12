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
		cout << "a..." << endl;
		this->a = a;
		//print();//会调用父类的print()函数
	}
	virtual void print()
	{
		cout << "parent..." << endl;
	}
private:
	int a;
};

class Child :public Parent{
public:
	Child(int a, int b) :Parent(a)//在调用父类构造函数时，子类vptr会指向父类的虚函数表；执行子类构造函数时vptr指针又指向子类的虚函数表
	{
		cout << "b..." << endl;
		this->b = b;
	}
	virtual void print()
	{
		cout << "child..." << endl;
	}
private:
	int b;
};

int main()
{
	Parent *p = new Child(10 ,20);
	p->print();

	system("pause");
	return 0;
}
*/