#include "SaleMan.h"



SaleMan::SaleMan()
{
	cout << "SaleMan()..." << endl;
}


SaleMan::~SaleMan()
{
	cout << "~SaleMan()..." << endl;
}

//成员变量初始化
void SaleMan::init()
{
	cout << "请输入姓名" << endl;
	cin >> this->name;
	this->percent = 0.04;
	
}
//员工薪资
void SaleMan::getPay()
{
	cout << "请输入当月销售总额" << endl;
	cin >> this->saleTotalMoney;
	this->salary = this->saleTotalMoney * this->percent;
}
//员工级别
void SaleMan::upLevel(int level)
{
	this->level += level;
}
