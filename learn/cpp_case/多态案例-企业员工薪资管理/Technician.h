#pragma once
#include "Employee.h"
class Technician : public Employee
{
public:
	Technician();
	~Technician();

	//��Ա������ʼ��
	virtual void init();
	//Ա��н��
	virtual void getPay();
	//Ա������
	virtual void upLevel(int level);
private:
	int perHourMoney;
	int hourTotal;
};

