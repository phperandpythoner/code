#include "Employee.h"

int Employee::startNum = 1000;

Employee::Employee()
{
	cout << "Employee()..." << endl;
	this->id = ++startNum;
	this->level = 1;
	this->salary = 0.00;
}


Employee::~Employee()
{
	cout << "~Employee()..." << endl;
}

//��ʾԱ����Ϣ
void Employee::showEmployeeInfo()
{
	cout << "Ա�����ID" << this->id << endl;
	cout << "Ա������" << this->name << endl;
	cout << "Ա��н��" << this->salary << endl;
	cout << "Ա������" << this->level << endl;
}
