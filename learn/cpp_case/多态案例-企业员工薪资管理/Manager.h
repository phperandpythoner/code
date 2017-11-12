#pragma once
#include "Employee.h"
class Manager : virtual public Employee
{
public:
	Manager();

	//成员变量初始化
	virtual void init();
	//员工薪资
	virtual void getPay();
	//员工级别
	virtual void upLevel(int level);

	~Manager();
protected:
	double fixSalary;//固定薪资
};

