/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//-----------------------抽象层----------------------
//---------------------------------------------------
//CPU抽象类
class CPU {
public:
	//计算功能
	virtual void calculate() = 0;
};

//显卡抽象类
class Card {
public:
	//显示功能
	virtual void display() = 0;
};

//内存抽象类
class Memory {
public:
	virtual void storage() = 0;
};

//通用类 电脑类,定义成员变量指针指向抽象类
class Computer {
public:
	Computer(CPU *cpu, Memory *mem, Card *card)
	{
		cout << "Computer()..." << endl;
		this->cpu = cpu;
		this->mem = mem;
		this->card = card;
	}
	void work()
	{
		this->cpu->calculate();
		this->mem->storage();
		this->card->display();
	}
	~Computer()
	{
		cout << "~Computer()..." << endl;
		if (this->cpu != NULL)
		{
			delete this->cpu;
		}
		if (this->card != NULL)
		{
			delete this->card;
		}
		if (this->mem != NULL)
		{
			delete this->mem;
		}
	}
private:
	CPU *cpu;
	Memory *mem;
	Card *card;
};


//-----------------------实现层----------------------
//---------------------------------------------------
//组装一台Inter系列电脑
class InterCpu :public CPU {
public:
	virtual void calculate()
	{
		cout << "InterCpu calculate..." << endl;
	}
};

class InterMemory :public Memory {
public:
	virtual void storage()
	{
		cout << "InterMemory storage..." << endl;
	}
};

class InterCard : public Card {
public:
	virtual void display()
	{
		cout << "InterCard display..." << endl;
	}
};

//-----------------------业务层----------------------
//---------------------------------------------------

int main()
{
#if 0
	CPU *Intercpu = new InterCpu;
	Card *Intercard = new InterCard;
	Memory *Intermemory = new InterMemory;

	Computer com1(Intercpu, Intermemory, Intercard);
	com1.work();
#endif

	//Computer com(new InterCpu, new InterMemory, new InterCard);
	//com.work();

	Computer *com1 = new Computer(new InterCpu, new InterMemory, new InterCard);
	com1->work();

	system("pause");
	return 0;
}
*/