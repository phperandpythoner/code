#include "SaleManager.h"



SaleManager::SaleManager()
{
	cout << "SaleManager()..." << endl;
}


SaleManager::~SaleManager()
{
	cout << "~SaleManager()..." << endl;
}

//��Ա������ʼ��
void SaleManager::init()
{
	cout << "����������" << endl;
	cin >> this->name;
	this->fixSalary = 5000;
	this->salePercent = 0.05;
}
//Ա��н��
void SaleManager::getPay()
{
	cout << "���������ܶ�" << endl;
	cin >> this->saleAmount;
	this->salary = this->saleAmount * this->salePercent + this->fixSalary;
}
//Ա������
void SaleManager::upLevel(int level)
{
	this->level += level;
}
