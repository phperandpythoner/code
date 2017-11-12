/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//定义了纯虚函数的类称为抽象类，抽象类不能实例化
class Shape {
public:
	//纯虚函数语法
	virtual double getArea() = 0;
};

//继承抽象类，如果子类没有实现抽象类的纯虚函数，它依然是抽象类
//如果要实例化则必须实现纯虚函数
class Rect:public Shape{
public:
	Rect(int a)
	{
		this->a = a;
	}
	virtual double getArea()
	{
		return this->a * this->a;
	}
private:
	int a;//矩形边长
};

class Cricle:public Shape{
public:
	Cricle(double r)
	{
		this->r = r;
	}

	virtual double getArea()
	{
		return 3.14 * this->r * this->r;
	}
private:
	double r;
};

//定义一个架构函数
double getArea(Shape *sp)
{
	return sp->getArea();
}

int main()
{
	Shape *sp1 = new Rect(10);
	//cout << "矩形面积：" << sp1->getArea() << endl;
	cout << "矩形面积：" << getArea(sp1) << endl;


	Shape *sp2 = new Cricle(5);
	//cout << "圆形面积：" << sp2->getArea() << endl;
	cout << "圆形面积：" << getArea(sp2) << endl;


	system("pause");
	return 0;
}
*/