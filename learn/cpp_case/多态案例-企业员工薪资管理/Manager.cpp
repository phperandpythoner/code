#include "Manager.h"



Manager::Manager()
{
	cout << "Manager()..." << endl;
}


Manager::~Manager()
{
	cout << "~Manager()..." << endl;
}

//成员变量初始化
void Manager::init()
{
	cout << "请输入员工姓名" << endl;
	cin >> this->name;
	this->fixSalary = 8000;
}
//员工薪资
void Manager::getPay()
{
	this->salary = this->fixSalary;
}
//员工级别
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