#include "Technician.h"



Technician::Technician()
{
	cout << "Technician()..." << endl;
}


Technician::~Technician()
{
	cout << "~Technician()..." << endl;
}

//��Ա������ʼ��
void Technician::init()
{
	cout << "������Ա������" << endl;
	cin >> this->name;
	this->perHourMoney = 100;
 }
//Ա��н��
void Technician::getPay()
{
	cout << "������Ա��һ�¹�������Сʱ" << endl;
	cin >> this->hourTotal;

	this->salary = this->perHourMoney * this->hourTotal;
 }
//Ա������
void Technician::upLevel(int level)
{
	this->level += level;
}