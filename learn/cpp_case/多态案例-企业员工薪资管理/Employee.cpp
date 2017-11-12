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

//显示员工信息
void Employee::showEmployeeInfo()
{
	cout << "员工编号ID" << this->id << endl;
	cout << "员工姓名" << this->name << endl;
	cout << "员工薪资" << this->salary << endl;
	cout << "员工级别" << this->level << endl;
}
