#include "StipendEmployee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//			[Constructor]
StipendEmployee::StipendEmployee(int id, string name, double hours, double payment) : Employee(id, name) {
	contractHours = hours;
	contractPayment = payment;
}

//			[Getters]
double StipendEmployee::getContractHours() {
	return contractHours;
}
double StipendEmployee::getContractPayment() {
	return contractPayment;
}

//		[Overriden printPay function]
void StipendEmployee::printPay() {

	double weeklyPay = (contractPayment / (contractHours / STIPEND_CONVERSION));
	cout << setprecision(TWO_DECIMALS) << fixed; //Sets to 2 digits (decimal)
	cout << "The pay for the stipend employee " << getName() << " with ID number "
		<< getId() << " is $" << weeklyPay << endl;
}