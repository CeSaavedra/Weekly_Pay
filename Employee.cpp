#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

//				[Constructors]

Employee::Employee(int id, string name) { //Sets corresponding variables to one another
	employeeId = id;
	employeeName = name;
}
//				[Getter Functions]

const int Employee::getId() { //Returns employee ID
	return employeeId;
}
const string Employee::getName() { //Returns employee name
	return employeeName;
}




