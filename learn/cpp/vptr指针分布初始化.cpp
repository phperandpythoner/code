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
		//print();//����ø����print()����
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
	Child(int a, int b) :Parent(a)//�ڵ��ø��๹�캯��ʱ������vptr��ָ������麯����ִ�����๹�캯��ʱvptrָ����ָ��������麯����
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