#include <iostream>
#include <string>
#include <vector>

//Include all header files
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "StipendEmployee.h"
using namespace std;

//Prototypes
void displayTitle();
void printList(const vector <Employee*>& Ve);
void getInput(vector <Employee*>& Ve);

//Functions

//Returns void; Displays title
void displayTitle() {
	cout << "\n\tWelcome to my Employee Weekly Pay Program\n\n";
}

//Void function; Uses constant vector holding pointer to base class in the parameter
//Loops through vector and uses printPay() on each object within the vector
void printList(const vector <Employee*>& Ve) {

	cout << endl;
	//Loops through each object
	for (int i = 0; i < Ve.size(); i++) {
		Ve[i]->printPay();
	}

}


//Void function; Uses vector holding pointer to base class in the parameter
//Takes user input to fill out object information and use it to create an object
//and push it back into the vector
void getInput(vector <Employee*>& Ve) {
	int menuChoice = 0;
	string employeeName;
	int employeeId = 0;
	//Hourly Employees
	double hoursWorked = 0;
	double hourlyRate = 0;
	//Salary Employees
	double yearlySalary = 0;
	//Stipend Employees
	double stipendAmount = 0;
	double stipendHours = 0;
	bool validated = false;
	//Initializes objects
	Employee* hourlyObj;
	Employee* salariedObj;
	Employee* stipendObj;

	do { //Input loop - Loop ends when user chooses the End Program option

		//Displays menu for input and stores user input
		cout << endl << HOURLY_EMPLOYEE << ". Hourly Employee\n" << SALARY_EMPLOYEE
			<< ". Salaried Employee\n" << STIPEND_EMPLOYEE << ". Stipend Employee\n"
			<< QUIT << ". End Program\nEnter menu choice: ";
		cin >> menuChoice;

		//Switch loop that uses input to choose desired function
		switch (menuChoice) {
			
		case HOURLY_EMPLOYEE:
			cin.ignore();
			//Prompts user for employee name
			cout << "\nEnter the employee name: ";
			getline(cin, employeeName);

			do { //Loops while "validated" bool variable is false
				//Prompts user for employee ID
				cout << "Enter employee id: ";
				cin >> employeeId;

				//Checks for validation
				if (employeeId > 0) {
					if (employeeId >= ID_MIN && employeeId <= ID_MAX) {
						//Valid
						validated = true;
					}
					else {
						//Invalid
						cout << "Error - ID number must be between 100,000 - 999,999. Please reenter.\n";
					}
				}
				else {
					//Invalid
					cout << "Error - ID number must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			do { //Loops while "validated" bool variable is false
				//Prompts user for hours worked
				cout << "Enter hours worked: ";
				cin >> hoursWorked;

				//Checks for validation
				if (hoursWorked > 0) {
					//Valid
					validated = true;
				}
				else {
					//Invalid
					cout << "Error - hours worked must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			do { //Loops while "validated" bool variable is false
				//Prompts user for hourly rate
				cout << "Enter hourly rate: ";
				cin >> hourlyRate;

				//Checks for validation
				if (hourlyRate > 0) {
					//Valid
					validated = true;
				}
				else {
					//Invalid
					cout << "Error - hourly rate must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			hourlyObj = new HourlyEmployee(employeeId, employeeName, hoursWorked, hourlyRate);
			Ve.push_back(hourlyObj);

			menuChoice = 0;
			break;

		case SALARY_EMPLOYEE:
			cin.ignore();
			//Prompts user for employee name
			cout << "\nEnter the employee name: ";
			getline(cin, employeeName);

			do { //Loops while "validated" bool variable is false
				//Prompts user for employee ID
				cout << "Enter employee id: ";
				cin >> employeeId;

				//Checks for validation
				if (employeeId > 0) {
					if (employeeId >= ID_MIN && employeeId <= ID_MAX) {
						//Valid
						validated = true;
					}
					else {
						//Invalid
						cout << "Error - ID number must be between 100,000 - 999,999. Please reenter.\n";
					}
				}
				else {
					//Invalid
					cout << "Error - ID number must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			do { //Loops while "validated" bool variable is false
				//Prompts user for salary worked
				cout << "Enter salary: ";
				cin >> yearlySalary;

				//Checks for validation
				if (yearlySalary > 0) {
					//Valid
					validated = true;
				}
				else {
					//Invalid
					cout << "Error - salary must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			salariedObj = new SalariedEmployee(employeeId, employeeName, yearlySalary);
			Ve.push_back(salariedObj);

			menuChoice = 0;
			break;

		case STIPEND_EMPLOYEE:
			cin.ignore();
			//Prompts user for employee name
			cout << "\nEnter the employee name: ";
			getline(cin, employeeName);

			do { //Loops while "validated" bool variable is false
				//Prompts user for employee ID
				cout << "Enter employee id: ";
				cin >> employeeId;

				//Checks for validation
				if (employeeId > 0) {
					if (employeeId >= ID_MIN && employeeId <= ID_MAX) {
						//Valid
						validated = true;
					}
					else {
						//Invalid
						cout << "Error - ID number must be between 100,000 - 999,999. Please reenter.\n";
					}
				}
				else {
					//Invalid
					cout << "Error - ID number must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			do { //Loops while "validated" bool variable is false
				//Prompts user for stipend amount
				cout << "Enter stipend amount: ";
				cin >> stipendAmount;

				//Checks for validation
				if (stipendAmount > 0) {
					//Valid
					validated = true;
				}
				else {
					//Invalid
					cout << "Error - stipend amount must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			do { //Loops while "validated" bool variable is false
				//Prompts user for hours worked
				cout << "Enter hours worked: ";
				cin >> stipendHours;

				//Checks for validation
				if (stipendHours > 0) {
					//Valid
					validated = true;
				}
				else {
					//Invalid
					cout << "Error - hours worked must be greater than 0. Please reenter.\n";
				}
			} while (!validated);
			validated = false; //Resets validation variable

			stipendObj = new StipendEmployee(employeeId,employeeName,stipendHours, stipendAmount);
			Ve.push_back(stipendObj);

			menuChoice = 0;
			break;

		case QUIT:
			//Ends program
			break;

		default:
			//If no valid menu choice is chosen - Displays error message and runs loop back
			cout << "Error - Invalid entry. Please reenter menu choice.\n";
			menuChoice = 0;
			break;
		}
	} while (menuChoice != QUIT);
}



int main() {

	displayTitle();

	//Creates the vector
	vector <Employee*> employees;

	//Uses functions created above utilizing vector created
	getInput(employees);
	printList(employees);


}