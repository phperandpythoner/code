/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//�����˴��麯�������Ϊ�����࣬�����಻��ʵ����
class Shape {
public:
	//���麯���﷨
	virtual double getArea() = 0;
};

//�̳г����࣬�������û��ʵ�ֳ�����Ĵ��麯��������Ȼ�ǳ�����
//���Ҫʵ���������ʵ�ִ��麯��
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
	int a;//���α߳�
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

//����һ���ܹ�����
double getArea(Shape *sp)
{
	return sp->getArea();
}

int main()
{
	Shape *sp1 = new Rect(10);
	//cout << "���������" << sp1->getArea() << endl;
	cout << "���������" << getArea(sp1) << endl;


	Shape *sp2 = new Cricle(5);
	//cout << "Բ�������" << sp2->getArea() << endl;
	cout << "Բ�������" << getArea(sp2) << endl;


	system("pause");
	return 0;
}
*/