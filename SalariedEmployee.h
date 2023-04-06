#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

//Derived class
class SalariedEmployee : public Employee {

private:
	//Private attribute
	double yearlySalary;

public:
	//Constructor
	SalariedEmployee(int id, string name, double yearSalary);

	//Getter
	double getYearlySalary();

	//Overrident printPay() function
	void printPay();

};

#endif