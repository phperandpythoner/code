/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//-----------------------�����----------------------
//---------------------------------------------------
//CPU������
class CPU {
public:
	//���㹦��
	virtual void calculate() = 0;
};

//�Կ�������
class Card {
public:
	//��ʾ����
	virtual void display() = 0;
};

//�ڴ������
class Memory {
public:
	virtual void storage() = 0;
};

//ͨ���� ������,�����Ա����ָ��ָ�������
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


//-----------------------ʵ�ֲ�----------------------
//---------------------------------------------------
//��װһ̨Interϵ�е���
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

//-----------------------ҵ���----------------------
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