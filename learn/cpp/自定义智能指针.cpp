/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <memory>
#include <string>

using namespace std;

class Test {
public:
	Test(int a)
	{
		cout << "Test()..." << endl;
		this->x = a;
	}

	int getX()
	{
		return this->x;
	}

	~Test()
	{
		cout << "~Test()..." << endl;
	}
private:
	int x;
};

//自定义智能指针类
class MyAutoPtr {
public:
	MyAutoPtr(Test *ptr)
	{
		cout << "MyAutoPtr()..." << endl;
		this->ptr = ptr;
	}

	~MyAutoPtr()
	{
		cout << "~MyAutoPtr()..." << endl;
		if (this->ptr != NULL)
		{
			cout << "delete ptr ..." << endl;
			delete ptr;
			this->ptr = NULL;
		}
	}

	Test *operator->()
	{
		return this->ptr;
	}

	Test &operator*()
	{
		return *ptr;
	}

private:
	Test *ptr;
};

void testp()
{
	Test *p = new Test(10);
	cout << p->getX() << endl;
	*p = 20;
	cout << p->getX() << endl;
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}
}

//智能指针
void testPtr()
{
	//定义
	auto_ptr<Test> p(new Test(100));
	cout << p->getX() << endl;
	*p = 200;
	cout << (*p).getX() << endl;
}

void testPtr2()
{
	MyAutoPtr p(new Test(30));
	cout << p->getX() << endl;
	*p = 300;
	cout << (*p).getX() << endl;
}

int main()
{
	testp();
	cout << "---------------------" << endl;
	testPtr();
	cout << "---------------------" << endl;
	testPtr2();
	cout << "---------------------" << endl;
	
	string s1 = "abc";
	cout << s1 << endl;

	system("pause");
	return 0;
}
*/