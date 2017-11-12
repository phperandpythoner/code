/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//���ࣨ���ࣩ
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

	static int cardid;//����һ����̬��������Ҫ��ȫ����������ʼ��
private:
	int id;
	string name;
};

int Student::cardid = 100;

//�����ࣨ���ࣩ
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


//����1�������е�private��Ա��������������ʲô�̳У��������Է���
//����2������ǹ��У�public���̳У�������ķ���Ȩ�޲���
//����3������Ǳ�����protected���̳У��ڻ����г���private��Ա���������������ж���protected
//����4�������˽�У�private���̳У��ڻ����г���private��Ա���������������ж���private

//���ࣨ���ࣩ
class Parent {
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};

//���м̳У�������̳л���ĳ�Ա���Բ��䣬private���ɼ���
class Child1 :public Parent {
public:
	void func()
	{
		pub;//���Է���
		pro;//���Է���
		//pri;//�����Է���
	}
};

class Sub_Child1 :public Child1 {
public:
	void func()
	{
		pub;//���Է���
		pro;//���Է���
		//pri;//�����Է���
	}
};

//�����̳У�������̳л���ĳ�Ա���Զ���protected��private���ɼ���
class Child2 :protected Parent {
public:
	void func()
	{
		pub;//���Է���
		pro;//���Է���
		//pri;//�����Է���
	}
};

class Sub_Child2 :public Child2 {
public:
	void func()
	{
		pub;//���Է���
		pro;//���Է���
		//pri;//�����Է���
	}
};


//˽�м̳�
class Child3 :private Parent {
public:
	void func()
	{
		pub;//���Է���
		pro;//���Է���
		//pri;//�����Է���;
	}
};

class Sub_Child3 :public Child3 {
public:
	void func()
	{
		//pub;//�����Է���
		//pro;//�����Է���
		//pri;//�����Է���
	}
};

int main()
{
	Student2 s1(1, "allen", 90.00);
	s1.printS();

	cout << "------------------" << endl;

	//��������඼����ͬһ����̬����
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

	cout << "---------�������������������---------" << endl;
	//Student stu;
	//Student2 stu2 = stu; //err, �������stu��䲻���������stu2

	Student2 stu2;
	stu2.cardid = 123;
	Student stu = stu2;//�����������ڴ��︴��һ�ݸ�������У���������ռ�õĿռ��С >= ����ռ�õĿռ��С
	cout << stu.cardid << endl;

	Student *sp = NULL;//����ָ��
	Student2 *sp2 = NULL;//����ָ��

	Student stud; //�������
	Student2 stud2; //�������

	//sp2 = &stud;//���಻����ָ����
	sp = &stud2;//�������ָ������
	cout << sp->cardid << endl;

	system("pause");
	return 0;
}
*/