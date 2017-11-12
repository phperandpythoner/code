#pragma once
#include "Employee.h"
class Technician : public Employee
{
public:
	Technician();
	~Technician();

	//成员变量初始化
	virtual void init();
	//员工薪资
	virtual void getPay();
	//员工级别
	virtual void upLevel(int level);
private:
	int perHourMoney;
	int hourTotal;
};

