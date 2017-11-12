/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Complex {
public:
	//friend Complex operator+(Complex & c1, Complex & c2);
	//friend Complex operator-(Complex & c1, Complex & c2);
	//friend Complex & operator+=(Complex & c1, Complex & c2);
	//friend Complex & operator-=(Complex & c1, Complex & c2);
	//friend Complex & operator++(Complex &c1);
	//friend Complex & operator++(Complex &c1, int);
	friend Complex & operator--(Complex &c);
	friend ostream & operator<<(ostream &os, Complex & c);

	Complex(int a, int b)
	{
		this->x = a;
		this->y = b;
	}

	void printComplex()
	{
		cout << "x = " << this->x << endl;
		cout << "y = " << this->y << endl;
	}

	//重载操作符+ 局部函数
	Complex operator+(Complex & another)
	{
		Complex tmp(this->x + another.x, this->y + another.y);

		return tmp;
	}

	//重载操作符- 局部函数
	Complex operator-(Complex & another)
	{
		Complex tmp(this->x - another.x, this->y - another.y);

		return tmp;
	}

	//重载操作符 += 局部函数
	Complex & operator+=(Complex & another)
	{
		this->x += another.x;
		this->y += another.y;

		return *this;
	}

	//重载操作符 -= 局部函数
	Complex & operator-=(Complex & another)
	{
		this->x -= another.x;
		this->y -= another.y;

		return *this;
	}

	//重载操作符 ++ 局部函数
	Complex & operator++()
	{
		this->x++;
		this->y++;

		return *this;
	}

	//重载操作符 ++ 局部函数
	Complex & operator++(int)
	{
		this->x++;
		this->y++;

		return *this;
	}

private:
	int x;
	int y;
};

#if 0
//重载操作符+ 全局函数
Complex operator+(Complex & c1, Complex & c2)
{
	Complex tmp(c1.x+c2.x, c1.y+c2.y);

	return tmp;
}
#endif

#if 0
//重载操作符- 全局函数
Complex operator-(Complex & c1, Complex & c2)
{
	Complex tmp(c1.x - c2.x, c1.y - c2.y);

	return tmp;
}
#endif

#if 0
//重载操作符 += 全局函数
Complex & operator+=(Complex & c1, Complex & c2)
{
	c1.x += c2.x;
	c1.y += c2.y;

	return c1;
}
#endif

#if 0
//重载操作符 -= 全局函数
Complex & operator-=(Complex & c1, Complex & c2)
{
	c1.x -= c2.x;
	c1.y -= c2.y;

	return c1;
}
#endif

#if 0
//重载操作符 ++ 全局函数
Complex & operator++(Complex &c1)
{
	c1.x++;
	c1.y++;

	return c1;
}
#endif

#if 0
//重载操作符 ++ 全局函数
Complex & operator++(Complex &c1, int) //亚元
{
	c1.x++;
	c1.y++;

	return c1;
}
#endif

//重载操作符 -- 全局函数
Complex & operator--(Complex &c)
{
	c.x--;
	c.y--;

	return c;
}

//重载操作符 << 全局函数
// << >>操作符重载不要定义到类里，否则调用时会改变语言原有的方式
ostream & operator<<(ostream &os, Complex & c)
{
	os << c.x << " " << c.y;

	return os;
}

int main()
{
	Complex c1(1, 2);
	Complex c2(3, 4);

	cout << "+ 重载操作符" << endl;
	Complex c3 = c1 + c2;
	//Complex c3 = operator+(c1, c2); //全局函数; 与Complex c3 = c1 + c2等价
	//Complex c3 = c1.operator+(c2); //局部函数
	c3.printComplex();

	c3 = c1 + c2 + c3;
	cout << "c1 + c2 + c3 = " << endl;
	c3.printComplex();

	cout << "- 重载操作符" << endl;
	c3 = c1 - c2;
	c3.printComplex();

	cout << "+= 重载操作符" << endl;
	c1 += c2 += c2;
	c1.printComplex();
	//Complex c4 = operator+=(c1, c2);
	//c4.printComplex();

	cout << "-= 重载操作符" << endl;
	Complex c5(1, 2);
	Complex c6(3, 4);
	c6 -= c5;
	c6.printComplex();

	cout << "前++ 重载操作符" << endl;
	++c6;
	++c6;
	c6.printComplex();

	cout << "后++ 重载操作符" << endl;
	c6++;
	c6.printComplex();

	cout << "-- 重载操作符" << endl;
	--c6;
	c6.printComplex();

	cout << "<< 重载操作符" << endl;
	cout << c6 << endl;

	system("pause");
	return 0;
}
*/