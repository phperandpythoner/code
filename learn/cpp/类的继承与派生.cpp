/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//基类（父类）
class Student {
public:
	Student()
	{

	}

	Student(int id, string name)
	{
		cout << "Student()..." << endl;
		this->id = id;
		this->name = name;
	}

	void printS()
	{
		cout << "id:" << this->id << ", name:" << this->name << endl;
	}

	~Student()
	{
		cout << "~Studnet()..." << endl;
	}

	static int cardid;//定义一个静态变量，需要在全局区声明初始化
private:
	int id;
	string name;
};

int Student::cardid = 100;

//派生类（子类）
class Student2 : public Student {
public:
	Student2()
	{

	}
	Student2(int id, string name, double score) : Student(id, name)
	{
		cout << "Student2()..." << endl;
		this->score = score;
	}

	void printS()
	{
		Student::printS();
		cout << "score:" << this->score << endl;
	}

	~Student2()
	{
		cout << "~Student2()..." << endl;
	}
	int pid;
private:
	double score;
};


//规则1：基类中的private成员，不管派生类是什么继承，都不可以访问
//规则2：如果是公有（public）继承，派生类的访问权限不变
//规则3：如果是保护（protected）继承，在基类中出来private成员，其余在派生类中都是protected
//规则4：如果是私有（private）继承，在基类中出来private成员，其余在派生类中都是private

//基类（父类）
class Parent {
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

//公有继承（派生类继承基类的成员属性不变，private不可见）
class Child1 :public Parent {
public:
	void func()
	{
		pub;//可以访问
		pro;//可以访问
		//pri;//不可以访问
	}
};

class Sub_Child1 :public Child1 {
public:
	void func()
	{
		pub;//可以访问
		pro;//可以访问
		//pri;//不可以访问
	}
};

//保护继承（派生类继承基类的成员属性都是protected，private不可见）
class Child2 :protected Parent {
public:
	void func()
	{
		pub;//可以访问
		pro;//可以访问
		//pri;//不可以访问
	}
};

class Sub_Child2 :public Child2 {
public:
	void func()
	{
		pub;//可以访问
		pro;//可以访问
		//pri;//不可以访问
	}
};


//私有继承
class Child3 :private Parent {
public:
	void func()
	{
		pub;//可以访问
		pro;//可以访问
		//pri;//不可以访问;
	}
};

class Sub_Child3 :public Child3 {
public:
	void func()
	{
		//pub;//不可以访问
		//pro;//不可以访问
		//pri;//不可以访问
	}
};

int main()
{
	Student2 s1(1, "allen", 90.00);
	s1.printS();

	cout << "------------------" << endl;

	//父类和子类都共用同一个静态变量
	Student a1;
	Student a2;
	cout << a1.cardid << endl;
	cout << a2.cardid << endl;

	cout << "------------------" << endl;
	Student::cardid = 200;
	cout << a1.cardid << endl;
	cout << a2.cardid << endl;
	Student2 a3;
	Student2 a4;
	cout << a3.cardid << endl;
	cout << a4.cardid << endl;

	cout << "------------------" << endl;
	a3.cardid = 300;
	cout << a1.cardid << endl;
	cout << a2.cardid << endl;
	cout << a3.cardid << endl;
	cout << a4.cardid << endl;

	cout << "---------父类与子类兼容性问题---------" << endl;
	//Student stu;
	//Student2 stu2 = stu; //err, 父类对象stu填充不满子类对象stu2

	Student2 stu2;
	stu2.cardid = 123;
	Student stu = stu2;//子类对象会在内存里复制一份父类的所有，所以子类占用的空间大小 >= 父类占用的空间大小
	cout << stu.cardid << endl;

	Student *sp = NULL;//父类指针
	Student2 *sp2 = NULL;//子类指针

	Student stud; //父类对象
	Student2 stud2; //子类对象

	//sp2 = &stud;//子类不可以指向父类
	sp = &stud2;//父类可以指向子类
	cout << sp->cardid << endl;

	system("pause");
	return 0;
}
*/