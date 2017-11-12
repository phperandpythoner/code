/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

template<class T1, class T2>
class Teacher {
public:
	template<class T1, class T2>
	friend ostream& operator<<(ostream& os, Teacher<T1, T2>& p);

	//普通友元函数模板
	template<class T1, class T2>
	friend void show(Teacher<T1, T2>& p);

	Teacher(T1 id, T2 name);
	void printMethod();
private:
	T1 mId;
	T2 mName;
};

template<class T1, class T2>
Teacher<T1, T2>::Teacher(T1 id, T2 name)
{
	mId = id;
	mName = name;
}

template<class T1, class T2>
void Teacher<T1, T2>::printMethod()
{
	cout << "id:" << mId << ", name:" << mName << endl;
}

template<class T1, class T2>
ostream& operator<<(ostream& os, Teacher<T1, T2>& p)
{
	os << "id:" << p.mId << ", name:" << p.mName << endl;
	return os;
}

template<class T1, class T2>
void show(Teacher<T1, T2>& p)
{
	cout << "id:" << p.mId << ", name:" << p.mName << endl;
}

int main()
{
	Teacher<int, string> t(10, "张三");
	//t.printMethod();
	//cout << t;
	show(t);

	system("pause");
	return 0;
}
*/