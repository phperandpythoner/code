#pragma once
#include "Employee.h"
class SaleMan : virtual public Employee
{
public:
	SaleMan();

	//��Ա������ʼ��
	virtual void init();
	//Ա��н��
	virtual void getPay();
	//Ա������
	virtual void upLevel(int level);

	~SaleMan();

private:
	double percent;//�����
	double saleTotalMoney;//�����ܶ�
};

