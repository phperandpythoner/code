#include "SaleMan.h"



SaleMan::SaleMan()
{
	cout << "SaleMan()..." << endl;
}


SaleMan::~SaleMan()
{
	cout << "~SaleMan()..." << endl;
}

//��Ա������ʼ��
void SaleMan::init()
{
	cout << "����������" << endl;
	cin >> this->name;
	this->percent = 0.04;
	
}
//Ա��н��
void SaleMan::getPay()
{
	cout << "�����뵱�������ܶ�" << endl;
	cin >> this->saleTotalMoney;
	this->salary = this->saleTotalMoney * this->percent;
}
//Ա������
void SaleMan::upLevel(int level)
{
	this->level += level;
}
