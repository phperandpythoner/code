#pragma once
#include "Employee.h"
class Manager : virtual public Employee
{
public:
	Manager();

	//��Ա������ʼ��
	virtual void init();
	//Ա��н��
	virtual void getPay();
	//Ա������
	virtual void upLevel(int level);

	~Manager();
protected:
	double fixSalary;//�̶�н��
};

