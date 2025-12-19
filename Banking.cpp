#include "Banking.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Create a banking constructor 
Banking::Banking(double initial, double monthly, double annualRate, int years)
{
	initialInvestment = initial;
	monthlyDeposit = monthly;
	annualInterest = annualRate;
	numOfYears = years;
}
// Convert annual percentage to monthly in the form of a decimal
double Banking::getMonthlyRate() const {
	return (annualInterest / 100.0) / 12.0;
}

// Create report without monthly deposits
void Banking::printReportWithoutMonthlyDeposits() const {
	double monthlyRate = getMonthlyRate();
	double userBalance = initialInvestment;
	// Print user balance to 2 decimal places
	cout << fixed << setprecision(2);
	cout << endl;
	// Print static report showing user balance and interest without monthly deposits
	cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
	cout << "================================================================" << endl;
	// For alignment, use setw to make each column a certain length wide
	cout << setw(6) << "Year";
	cout << setw(25) << "Year end Balance";
	cout << setw(30) << "Year End Eraned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	// Create a loop to calaculate number of years as once per year
	for (int year = 1; year <= numOfYears; ++year) {
		double yearInterest = 0.0;

		// Calculate interest for 12 months per year 
		for (int month = 1; month <= 12; ++month) {
			double interest = userBalance * monthlyRate;
			userBalance += interest;
			yearInterest += interest;
		}
		// Print calculations for each variable to be shown in table
		cout << setw(6) << year;
		cout << setw(25) << userBalance;
		cout << setw(30) << yearInterest << endl;
	}
}
// Create report with monthly deposits
void Banking::printReportWithMonthlyDeposits() const {
	double monthlyRate = getMonthlyRate();
	double userBalance = initialInvestment;
	// Print user balane to 2 decimal places
	cout << fixed << setprecision(2);
	cout << endl;
	// Print static report showing user balane and interest with monthly deposits
	cout << "    Balance and Interest With Additional Monthly Deposits    " << endl;
	cout << "=============================================================" << endl;
	// For alignment purposes, use setw to make the column width a certain length
	cout << setw(6) << "Year";
	cout << setw(25) << "Year End Balance";
	cout << setw(30) << "Year End Eraned Interest" << endl;
	cout << "-------------------------------------------------------------" << endl;

	// Create a loop to calculate deposit for once per year
	for (int year = 1; year <= numOfYears; ++year) {
		double yearInterest = 0.0;
		// Create loop to calculate deposit for 12 months per year
		for (int month = 1; month <= 12; ++month) {
			userBalance += monthlyDeposit;
			
			double interest = userBalance * monthlyRate;
			userBalance += interest;
			yearInterest += interest;
		}
		// Print calculation to be shown in table 
		cout << setw(6) << year;
		cout << setw(25) << userBalance;
		cout << setw(30) << yearInterest << endl;
	}

}
