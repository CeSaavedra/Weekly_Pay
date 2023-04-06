#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

//Derived class
class HourlyEmployee : public Employee {

private:
	//Private attributes
	double hoursWorked;
	double payRate;

public:
	//Constructor
	HourlyEmployee(int id, string name, double hours, double rate);
	
	//Getters
	double getHours();
	double getPayRate();
	
	//Overriden printPay() function
	void printPay();

};
#endif