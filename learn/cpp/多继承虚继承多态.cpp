/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//��̬������������Ҫ����
//1��Ҫ�м̳�
//2��Ҫ���麯����д
//3������ָ�������ָ���������
class Parent {
public:
	Parent()
	{
		this->money = 100;
	}
	int money;
};

//��̳�ʹ�ùؼ���virtual�̳и��࣬��ֹ������̳и�����ʱ������үү���еĳ�Ա������ݿ���
class ChildXiaoming : virtual public Parent{
public:
	ChildXiaoming(string kunghu)
	{
		cout << "ChildXiaoming()..." << endl;
		this->kunghu = kunghu;
	}
	virtual void fight()
	{
		cout << "xiaoming" << "ʹ���� [" << this->kunghu << "] ����" << endl;
	}
	~ChildXiaoming()
	{
		cout << "~ChildXiaoming()..." << endl;
	}
	string kunghu;
};

class ChildXiaohua : virtual public Parent{
public:
};

//��̳�
class SubChild : public ChildXiaohua, public ChildXiaoming{
public:
	SubChild(string kunghu):ChildXiaoming(kunghu)
	{
		cout << "SubChild()..." << endl;
	}

	virtual void fight()
	{
		cout << "subchild" << "ʹ���� [" << this->kunghu << "] ����" << endl;
	}
	~SubChild()
	{
		cout << "~SubChild()..." << endl;
	}
};

void fightPeople(ChildXiaoming *p)
{
	cout << "fightPeople" <<endl;
	p->fight();
}


//����������
class A {
public:
	A()
	{
		cout << "A()..." << endl;
		this->p = new char[64];
		memset(this->p, 0, 64);
		strcpy(this->p, "A String...");
	}
	virtual void printString()
	{
		cout << "A:" << this->p << endl;
	}
	virtual ~A()
	{
		if (this->p != NULL)
		{
			delete[] this->p;
			this->p = NULL;
			cout << "~A()..." << endl;
		}
	}
private:
	char *p;
};

class B : public A{
public:
	B()
	{
		cout << "B()..." << endl;
		this->p = new char[64];
		memset(this->p, 0, 64);
		strcpy(this->p, "B String...");
	}
	virtual void printString()
	{
		cout << "B:" << this->p << endl;
	}
	virtual ~B()
	{
		if (this->p != NULL)
		{
			delete[] this->p;
			this->p = NULL;
			cout << "~B()..." << endl;
		}
	}
private:
	char *p;
};

void func(A *p)
{
	p->printString();
}

void test()
{
	//A *ap = new A;
	//func(ap);

	B *bp = new B;
	func(bp);
}

//��֤vptrָ��
class C {
public:
	void printC()
	{
		cout << "c..." << endl;
	}
	virtual void printCC()
	{
		cout << "cc..." << endl;
	}
private:
	int a;
};

class D {
public:
	void printD()
	{
		cout << "d..." << endl;
	}
private:
	int a;
};

int main()
{
	SubChild sc("abc");
	//sc.money;//ָ����
	
	cout << sc.money << endl;
	sc.fight();

	cout << "------------------------" << endl;
	ChildXiaoming *xm = new ChildXiaoming("aaa");
	SubChild *sub = new SubChild("ccc");
	//fightPeople(xm);
	fightPeople(sub);

	cout << "------------------------" << endl;

	test();

	cout << "------------------------" << endl;

	C c;
	D d;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;

	system("pause");
	return 0;
}
*/