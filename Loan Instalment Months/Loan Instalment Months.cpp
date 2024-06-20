						/* Program to calculate how many month you need to settle the loan */
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int Loan_Amount, Monthly_Payment;
	cout << "Enter  your Loan Amount " << endl;
	cin >> Loan_Amount;

	cout << "Enter your Monthly payment " << endl;
	cin >> Monthly_Payment;

	int Total_Months = Loan_Amount / Monthly_Payment;

	cout << "Payment will be made within " << Total_Months << " Months" << endl;


	return 0;

	// Created by @ilyes_Trabelsi
}
