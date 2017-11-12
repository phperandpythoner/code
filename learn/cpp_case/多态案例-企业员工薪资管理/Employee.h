#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
	//构造函数最好不要写业务逻辑
	Employee();

	//成员变量初始化
	virtual void init() = 0;
	//员工薪资
	virtual void getPay() = 0;
	//员工级别
	virtual void upLevel(int level) = 0;

	//显示员工信息
	void showEmployeeInfo();

	~Employee();
protected:
	int id;//员工编号
	string name;//员工姓名
	double salary;//员工薪水
	int level;//员工级别

	static int startNum;
};

