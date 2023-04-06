#include "HourlyEmployee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//				[Constructors]
HourlyEmployee::HourlyEmployee(int id, string name, double hours, double rate) : Employee(id, name) {
	hoursWorked = hours;
	payRate = rate;
}

//				  [Getters]
double HourlyEmployee::getHours() {
	return hoursWorked;
}
double HourlyEmployee::getPayRate() {
	return payRate;
}

//			[Overriden printPay function]
void HourlyEmployee::printPay() {

	double weeklyPay = hoursWorked * payRate;
	cout << setprecision(TWO_DECIMALS) << fixed; //Sets to 2 digits (decimal)
	cout << "The pay for the hourly employee " << getName() << " with ID number "
		<< getId() << " is $" << weeklyPay << endl;
}