#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "Employee.h"
#include "Technician.h"
#include "Manager.h"
#include "SaleMan.h"
#include "SaleManager.h"

using namespace std;


int main()
{
#if 0
	Employee *em = new Technician;
	em->init();
	em->upLevel(1);
	em->getPay();
	em->showEmployeeInfo();
	delete em;
#endif

#if 0
	Employee *em = new Manager;
	em->init();
	em->upLevel(1);
	em->getPay();
	em->showEmployeeInfo();
	delete em;
#endif

#if 0
	Employee *em = new SaleMan;
	em->init();
	em->upLevel(1);
	em->getPay();
	em->showEmployeeInfo();
	delete em;
#endif
	

	Employee *em = new SaleManager;
	em->init();
	em->upLevel(1);
	em->getPay();
	em->showEmployeeInfo();
	//delete em;

#if 0
	Employee *person_array[] = { new Technician, new Manager, new SaleMan, new SaleManager };
	int n = sizeof(person_array) / sizeof(person_array[0]);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		person_array[i]->init();
		person_array[i]->upLevel(1);
		person_array[i]->getPay();
		person_array[i]->showEmployeeInfo();
	}

	for (i = 0; i < n; i++)
	{
		if (person_array[i] != NULL)
		{
			delete person_array[i];
		}
	}
#endif

	system("pause");
	return 0;
}