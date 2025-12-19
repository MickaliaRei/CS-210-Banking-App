#pragma once
#ifndef BANKING_H
#define BANKING_H

class Banking {
public:
	// Create constructors to save default values
	Banking(double intitial, double monthly, double annualRtae, int years);
	// Print function to output of report with and without deposits
	void printReportWithoutMonthlyDeposits() const;
	void printReportWithMonthlyDeposits() const;

private:
	// Create private member variables. Interest will be in percentage
	double initialInvestment;
	double monthlyDeposit;
	double annualInterest;
	int numOfYears;
	// Create getter function to get the monthly interest rate represented as a decimal
	double getMonthlyRate() const;


};
#endif


