#include "SaleManager.h"



SaleManager::SaleManager()
{
	cout << "SaleManager()..." << endl;
}


SaleManager::~SaleManager()
{
	cout << "~SaleManager()..." << endl;
}

//成员变量初始化
void SaleManager::init()
{
	cout << "请输入姓名" << endl;
	cin >> this->name;
	this->fixSalary = 5000;
	this->salePercent = 0.05;
}
//员工薪资
void SaleManager::getPay()
{
	cout << "当月销售总额" << endl;
	cin >> this->saleAmount;
	this->salary = this->saleAmount * this->salePercent + this->fixSalary;
}
//员工级别
void SaleManager::upLevel(int level)
{
	this->level += level;
}
