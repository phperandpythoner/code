/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int fun(int a, int b)
{
	cout << "fun" << a << b << endl;
	return 0;
}

int fun1(int a, int b)
{
	cout << "fun1" << a << b << endl;
	return 0;
}

int fun2(int a, int b)
{
	cout << "fun2" << a << b << endl;
	return 0;
}

//����һ��ͨ�õĺ���
void common_func(int(*fp)(int a, int b), int x, int y)
{
	fp(x, y);
}

//����һ������һ����������
typedef int(FUNC)(int a, int b);

//������������һ������ָ������
typedef int(*FUNC_P)(int a, int b);

int main()
{
	//����һ
	FUNC *fp = NULL;
	fp = fun;
	fp(1, 2);

	//������
	FUNC_P fp2 = NULL;
	fp2 = fun;
	fp2(3, 4);

	//������
	int(*fp3)(int a, int b) = NULL;
	fp3 = fun;
	fp3(4, 5);

	cout << "-------------------------------" << endl;

	common_func(fun, 10, 20);
	common_func(fun1, 100, 200);
	common_func(fun2, 22, 33);
	
	system("pause");
	return 0;
}
*/