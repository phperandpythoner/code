#pragma once
#include "Manager.h"
#include "SaleMan.h"

class SaleManager : public Manager, public SaleMan
{
public:
	SaleManager();

	//成员变量初始化
	virtual void init();
	//员工薪资
	virtual void getPay();
	//员工级别
	virtual void upLevel(int level);

	~SaleManager();
private:
	double salePercent;//提成率
	double saleAmount; //销售总额
};

