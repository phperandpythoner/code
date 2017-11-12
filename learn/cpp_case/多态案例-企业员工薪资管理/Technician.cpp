#include "Technician.h"



Technician::Technician()
{
	cout << "Technician()..." << endl;
}


Technician::~Technician()
{
	cout << "~Technician()..." << endl;
}

//成员变量初始化
void Technician::init()
{
	cout << "请输入员工姓名" << endl;
	cin >> this->name;
	this->perHourMoney = 100;
 }
//员工薪资
void Technician::getPay()
{
	cout << "请输入员工一月工作多少小时" << endl;
	cin >> this->hourTotal;

	this->salary = this->perHourMoney * this->hourTotal;
 }
//员工级别
void Technician::upLevel(int level)
{
	this->level += level;
}