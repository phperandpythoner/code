#include "Manager.h"



Manager::Manager()
{
	cout << "Manager()..." << endl;
}


Manager::~Manager()
{
	cout << "~Manager()..." << endl;
}

//��Ա������ʼ��
void Manager::init()
{
	cout << "������Ա������" << endl;
	cin >> this->name;
	this->fixSalary = 8000;
}
//Ա��н��
void Manager::getPay()
{
	this->salary = this->fixSalary;
}
//Ա������
void Manager::upLevel(int level)
{
	this->level += level;
	if (this->level == 1)
	{
		this->fixSalary = 8000;
	}
	else if (this->level == 2)
	{
		this->fixSalary = 12000;
	}
	else
	{
		this->fixSalary = 20000;
	}
}