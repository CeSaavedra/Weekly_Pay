#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

//Constants used for menu
const int HOURLY_EMPLOYEE = 1;
const int SALARY_EMPLOYEE = 2;
const int STIPEND_EMPLOYEE = 3;
const int QUIT = 4;
//Constants used for validation
const int ID_MIN = 100000;
const int ID_MAX = 999999;
const int YEARLY_CONVERSION = 52;
const int STIPEND_CONVERSION = 40;
const int TWO_DECIMALS = 2;

//Base class
class Employee {
private:
	//Private attributes
	int employeeId;		  //Stores employee's ID
	string employeeName; //Stores employee's name

public:
	//Constructor
	Employee(int id, string name);
	
	//Getter functions
	const int getId();
	const string getName();

	//Pure Virtual function
	virtual void printPay() = 0; //Made pure by setting to 0

};

#endif
