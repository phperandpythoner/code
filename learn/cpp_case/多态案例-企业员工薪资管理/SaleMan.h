#pragma once
#include "Employee.h"
class SaleMan : virtual public Employee
{
public:
	SaleMan();

	//成员变量初始化
	virtual void init();
	//员工薪资
	virtual void getPay();
	//员工级别
	virtual void upLevel(int level);

	~SaleMan();

private:
	double percent;//提成率
	double saleTotalMoney;//销售总额
};

