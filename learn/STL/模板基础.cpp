/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//����ģ�庯��,����ģ���ϸ�������ƥ��
//TΪ���ͱ���,�����ж�����ͣ�templateֻ��������ĵ�һ����Ч��ÿдһ������Ҫдtemplate<class T>
template<class T>//��ͬ�� template<typename T>
void changeVariable(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "template changeVariable()..." << endl;
}

void changeVariable(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "ordinary changeVariable()..." << endl;
}

//����ģ���ϸ�������ƥ��
template<typename T1, typename T2>
int addNum(T1& a, T2& b)
{
	cout << "template addNum()..." << endl;
	return a + b;
}

//��ͨ�������Խ����Զ�����ת��
int addNum(int a, char b)
{
	cout << "ordinary addNum()..." << endl;
	return a + b;
}

void test1()
{
	int a = 10;
	int b = 20;
	char c1 = 'c';
	char c2 = 'd';

	cout << "a=" << a << ", b=" << b << endl;
	//ģ�庯������ͨ�������ں������أ�������Ĭ���ȵ�����ͨ����
	changeVariable(a, b);
	cout << "a=" << a << ", b=" << b << endl;
	//������ں������أ���Ҫ����ģ�庯�����ں������������ <>
	changeVariable<>(a, b);

	cout << "a+c1 = " << addNum(a, c1) << endl;

	cout << "b+c2 = " << addNum<>(b, c2) << endl;
}


//����ģ��������
template<class T>
void mySort(T *arr, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
			{
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
template<class T>
void myPrint(T *arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}


//��ģ������﷨
template<class T_INT, class T_STRING>
class Teacher {
public:
	Teacher(T_INT id, T_STRING name)
	{
		this->id = id;
		this->name = name;
	}
	void printVoid()
	{
		cout << "id:" << this->id << ", name:" << this->name << endl;
	}
private:
	int id;
	string name;
};

//��ģ��������ͨ��
class Teacher2 : public Teacher<int, string> {
public:
	Teacher2(int id, string name) :Teacher(id, name)
	{

	}
};


//��ģ��������ģ��
template<class T_INT, class T_NAME>
class NewTeacher : public Teacher<int, string>{
public:
	NewTeacher(int id, string name, int age) :Teacher(id, name)
	{
		this->age = age;
	}
	void printVoid()
	{
		Teacher::printVoid();
		cout << "age:" << this->age << endl;
	}
private:
	int age;
};

int main()
{
	test1();

	cout << "----------------------------" << endl;

	//��ģ�������ʾָ������
	Teacher<int, string> t1(1, "allen");
	t1.printVoid();

	Teacher2 t2(2, "kobe");
	t2.printVoid();

	NewTeacher<int, string> nt(3, "lily", 23);
	nt.printVoid();

	cout << "------------------------------" << endl;
	int myArr[] = { 8, 3, 7, 1, 0, 9, 4, 2, 5, 6 };
	int len = sizeof(myArr) / sizeof(myArr[0]);
	cout << "����ǰ" << endl;
	myPrint(myArr, len);
	mySort(myArr, len);
	cout << "�����" << endl;
	myPrint(myArr, len);

	cout << "-------------------------------------" << endl;
	char myChar[] = { 'c', 'h', 'v', 'a', 'r', 'y', 'b', 'd' };
	len = sizeof(myChar) / sizeof(myChar[0]);
	cout << "����ǰ" << endl;
	myPrint(myChar, len);
	mySort(myChar, len);
	cout << "�����" << endl;
	myPrint(myChar, len);

	system("pause");
	return 0;
}
*/