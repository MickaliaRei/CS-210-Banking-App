#include <iostream>
#include <iomanip>
#include <limits>
#include "Banking.h"

/*
Author: Mickalia Reid
Date: November 29, 2025

This program calculates and display user investments over a certain amount of years for Airgead Banking.
*/

using namespace std;

int main() {
	// Create and declare variables with default values
	double initialInvestment = 0.0;
	double monthlyDeposit = 0.0;
	double annualInterest = 0.0;
	int numOfYears = 0;

	// Create empty display screen for data input
	cout << "**********************************" << endl;
	cout << "********** Data Input ************" << endl;
	// Prompt user to input the initial investment amount then store the input in variable
	cout << "Initial Investment Amount: ";
	cin >> initialInvestment;
	// Prompt user to input the initial monthly deposit then store input in variable
	cout << "Monthly Deposit: ";
	cin >> monthlyDeposit;
	// Prompt user to input the initial annual interest in % then store in varibale
	cout << "Annual Interest (%): ";
	cin >> annualInterest;
	// Prompt user to input the initial number of years then store in variable 
	cout << "Number of Years: ";
	cin >> numOfYears;
	// Prompt user o press any key to continue
	cout << "Press any key to continue . . .";
	// Create a newline 
	cout << endl;

	// Second Display screen that prints user inputs
	cout << "***********************************" << endl;
	cout << "********** Data Input *************" << endl;
	cout << "Initial Investment Amount: $" << initialInvestment << endl;
	cout << "Monthly Deposit: $" << monthlyDeposit << endl;
	cout << "Annual Interest: " << annualInterest << endl;
	cout << "Number of Years: " << numOfYears << endl;
	cout << "Press any key to continue . . ." << endl;

	// Create a banking object with the user's inputted data
	Banking calc(initialInvestment, monthlyDeposit, annualInterest, numOfYears);

	// Print function to Output user report for with and without deposits
	calc.printReportWithoutMonthlyDeposits();
	calc.printReportWithMonthlyDeposits();

	return 0;


}
