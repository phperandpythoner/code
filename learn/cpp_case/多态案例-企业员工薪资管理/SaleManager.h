#pragma once
#include "Manager.h"
#include "SaleMan.h"

class SaleManager : public Manager, public SaleMan
{
public:
	SaleManager();

	//��Ա������ʼ��
	virtual void init();
	//Ա��н��
	virtual void getPay();
	//Ա������
	virtual void upLevel(int level);

	~SaleManager();
private:
	double salePercent;//�����
	double saleAmount; //�����ܶ�
};

