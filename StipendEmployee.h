#ifndef STIPENDEMPLOYEE_H
#define STIPENDEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

//Derived class
class StipendEmployee : public Employee {

private:
	//Private attribute
	double contractHours;
	double contractPayment;

public:
	//Constructor
	StipendEmployee(int id, string name, double hours,double payment);

	//Getters
	double getContractHours();
	double getContractPayment();

	//Overrident printPay() function
	void printPay();

};

#endif