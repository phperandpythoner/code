#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
	//���캯����ò�Ҫдҵ���߼�
	Employee();

	//��Ա������ʼ��
	virtual void init() = 0;
	//Ա��н��
	virtual void getPay() = 0;
	//Ա������
	virtual void upLevel(int level) = 0;

	//��ʾԱ����Ϣ
	void showEmployeeInfo();

	~Employee();
protected:
	int id;//Ա�����
	string name;//Ա������
	double salary;//Ա��нˮ
	int level;//Ա������

	static int startNum;
};

