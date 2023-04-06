#include "SalariedEmployee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//			[Constructors]
SalariedEmployee::SalariedEmployee(int id,string name,double yearSalary) : Employee(id,name){
	yearlySalary = yearSalary;
}

//			[Getters]
double SalariedEmployee::getYearlySalary() {
	return yearlySalary;
}

//			[Overriden printPay function]
void SalariedEmployee::printPay() {

	double weeklyPay = yearlySalary / YEARLY_CONVERSION;
	cout << setprecision(TWO_DECIMALS) << fixed; //Sets to 2 digits (decimal)
	cout << "The pay for the salaried employee " << getName() << " with ID number "
		<< getId() << " is $" << weeklyPay << endl;
}