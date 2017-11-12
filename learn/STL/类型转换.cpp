#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//1��static_cast:һ��ת��
//2��dynamic_cast:ͨ���ڻ�����������֮��ת��
//3��const_cast:��Ҫ���constת��
//4��reinterpret_cast:���ڽ���û���κι�����ת���������ַ�ָ��ת��Ϊ������


class Car {

};

class Animal {

};

class Dog : public Animal {

};


void test_static_cast()
{
	int a = 97;
	char b = static_cast<char>(a);
	cout << b << endl;

	//������������ָ��ת��,err
	//int* p = NULL;
	//char* cp = static_cast<char*>(p);//��������ת����Ч

	//����ָ��ת��,err
	//Car* car = NULL;
	//Animal* ani = static_cast<Animal*>(car);//��������ת����Ч

	//ת�����м̳й�ϵ�Ķ���ָ������ת��
	//����ָ��ת������ָ��
	Animal* ani = NULL;
	Dog* dog = static_cast<Dog*>(ani);
	//����ָ��ת������ָ��
	Dog* dog2 = NULL;
	Animal* ani2 = static_cast<Animal*>(dog2);


	//ת�����м̳й�ϵ�Ķ�������
	//��������ת����������
	Animal ani3;
	Animal& ani33 = ani3;
	Dog& dog3 = static_cast<Dog&>(ani33);
	//��������ת����������
	Dog dog4;
	Dog& dog44 = dog4;
	Animal& ani4 = static_cast<Animal&>(dog44);


	//�ܽ᣺
	//static_cast���������õ�����ת�������о��м̳й�ϵ��ָ�������
}

//dynamic_cast:ת�����м̳й�ϵ��ָ������ã���ת��ǰ��������ͼ��
void test_dynamic_cast()
{
	//��������
	//int a = 97;
	//char b = dynamic_cast<char>(a);//����dynamic_cast�е����ͱ�����ָ�����������ͻ�void*��ָ�������

	//�Ǽ̳й�ϵ��ָ��
	//Car* car = NULL;
	//Animal* ani = dynamic_cast<Animal*>(car);//�����Ǽ̳й�ϵָ��

	//���м̳й�ϵ��ָ��
	//����ָ��ת������ָ��
	//Animal* ani = NULL;
	//Dog* dog = dynamic_cast<Dog*>(ani);
	//�������м̳й�ϵ��ָ��
	//��Ϊdynamic_cast�������Ͱ�ȫ���

	//����ָ��ת������ָ��
	Dog* dog = NULL;
	Animal* ani = dynamic_cast<Animal*>(dog);
}

//const_cast:ת��ָ�롢���á�����ָ��
void test_const_cast()
{
	int a = 10;
	const int& b = a;//b��a�����ã����Ϊ��a�ı���
	int& c = const_cast<int&>(b);
	c = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//ָ��
	int* p = NULL;
	const int* p2 = const_cast<const int*>(p);

	const int* p3 = NULL;
	int* p4 = const_cast<int*>(p3);

	//�ܽ᣺���ӻ�ȥ��������const����
}

//reinterpret_cast:ǿ����ת��
typedef char(*FUNC_CHAR)(char, char);
typedef int(*FUNC_INT)(int, int);
void test_reinterpret_cast()
{
	//1���޹����͵�ָ�����ת��
	Car* car = NULL;
	Animal* ani = reinterpret_cast<Animal*>(car);

	//2������ָ��ת��
	FUNC_CHAR ch = NULL;
	FUNC_INT p = reinterpret_cast<FUNC_INT>(ch);
}

int main()
{
	test_static_cast();
	test_dynamic_cast();
	test_const_cast();

	system("pause");
	return 0;
}