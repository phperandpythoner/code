#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//1、static_cast:一般转换
//2、dynamic_cast:通常在基类与派生类之间转换
//3、const_cast:主要针对const转换
//4、reinterpret_cast:用于进行没有任何关联的转换，比如字符指针转换为整形数


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

	//基础数据类型指针转换,err
	//int* p = NULL;
	//char* cp = static_cast<char*>(p);//报错：类型转换无效

	//对象指针转换,err
	//Car* car = NULL;
	//Animal* ani = static_cast<Animal*>(car);//报错：类型转换无效

	//转换具有继承关系的对象指针类型转换
	//父类指针转换子类指针
	Animal* ani = NULL;
	Dog* dog = static_cast<Dog*>(ani);
	//子类指针转换父类指针
	Dog* dog2 = NULL;
	Animal* ani2 = static_cast<Animal*>(dog2);


	//转换具有继承关系的对象引用
	//父类引用转换子类引用
	Animal ani3;
	Animal& ani33 = ani3;
	Dog& dog3 = static_cast<Dog&>(ani33);
	//子类引用转换父类引用
	Dog dog4;
	Dog& dog44 = dog4;
	Animal& ani4 = static_cast<Animal&>(dog44);


	//总结：
	//static_cast：用于内置的类型转换，还有具有继承关系的指针和引用
}

//dynamic_cast:转换具有继承关系的指针或引用，在转换前会进行类型检测
void test_dynamic_cast()
{
	//基础类型
	//int a = 97;
	//char b = dynamic_cast<char>(a);//报错：dynamic_cast中的类型必须是指向完整类类型或void*的指针和引用

	//非继承关系的指针
	//Car* car = NULL;
	//Animal* ani = dynamic_cast<Animal*>(car);//报错：非继承关系指针

	//具有继承关系的指针
	//父类指针转换子类指针
	//Animal* ani = NULL;
	//Dog* dog = dynamic_cast<Dog*>(ani);
	//报错：具有继承关系的指针
	//因为dynamic_cast做了类型安全检测

	//子类指针转换父类指针
	Dog* dog = NULL;
	Animal* ani = dynamic_cast<Animal*>(dog);
}

//const_cast:转换指针、引用、对象指针
void test_const_cast()
{
	int a = 10;
	const int& b = a;//b是a的引用，或称为是a的别名
	int& c = const_cast<int&>(b);
	c = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	//指针
	int* p = NULL;
	const int* p2 = const_cast<const int*>(p);

	const int* p3 = NULL;
	int* p4 = const_cast<int*>(p3);

	//总结：增加或去除变量的const属性
}

//reinterpret_cast:强类型转换
typedef char(*FUNC_CHAR)(char, char);
typedef int(*FUNC_INT)(int, int);
void test_reinterpret_cast()
{
	//1、无关类型的指针对象转换
	Car* car = NULL;
	Animal* ani = reinterpret_cast<Animal*>(car);

	//2、函数指针转换
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