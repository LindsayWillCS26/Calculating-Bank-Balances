#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Display welcome message for the user.
    cout << "Welcome to the Airgead Banking Investment Calculator!" << endl;

    // Prompt user to enter investment amount.
    double initialInvestment;
    cout << "Enter the initial investment amount: ";
    cin >> initialInvestment;
    //Read entered investment amount.

    // Prompt user to enter the montly deposit amount.
    double monthlyDeposit;
    cout << "Enter the monthly deposit amount: ";
    cin >> monthlyDeposit;
    //Read Monthly deposit amount.

    // Prompt the user to enter annual interest rate (Rate in percentage).
    double annualInterestRate;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annualInterestRate;
    //Read the annaul interest rate.

    // Prompt the user to enter years of intended for investment.
    int numYears;
    cout << "Enter the number of investment years: ";
    cin >> numYears;
    // Read the number of years of investment.

    // Convert annual interest rate from percentage to decimal
    annualInterestRate /= 100;

    // Initialize a variable to store the total investment amount
    double totalInvestment = initialInvestment;

    // Loop through each year with 1.
    for (int year = 1; year <= numYears; ++year) {
        // Loop through each month going 1 - 12.
        for (int month = 1; month <= 12; ++month) {
            // Calculate monthly interest
            double monthlyInterest = totalInvestment * (annualInterestRate / 12);
            // Add monthly interest to total investment
            totalInvestment += monthlyInterest;
            // Add monthly deposit to total investment
            totalInvestment += monthlyDeposit;
        }
        // Display total investment amount at the end of the year
        cout << "Year " << year << ": $" << fixed << setprecision(2) << totalInvestment << endl;
    }

    // Display final investment amount
    cout << "Final investment amount after " << numYears << " years: $" << fixed << setprecision(2) << totalInvestment << endl;

    return 0;
}
