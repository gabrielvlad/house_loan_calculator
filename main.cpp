/******************************************************************************
The formula that is being used:
// Calculate the monthly savings amount using the formula:
// P = FV / n
// Where:
//   P is the monthly savings amount,
//   FV is the future value (savings goal),
//   n is the total number of contributions (number of months).

Is implemented in the code as:
double monthlySavings = savingsGoal / numberOfMonths;

*******************************************************************************/
#include <iostream>
#include <cmath>

int main() {
    // Get user input for savings goal
    std::cout << "Enter the savings goal (in kr): ";
    double savingsGoal;
    std::cin >> savingsGoal;

    // Get user input for the number of years
    std::cout << "Enter the number of years: ";
    int numberOfYears;
    std::cin >> numberOfYears;

    // Calculate the total number of months
    int numberOfMonths = numberOfYears * 12;

    // Calculate the monthly savings amount
    double monthlySavings = savingsGoal / numberOfMonths;

    // Display the result
    std::cout << "To save " << savingsGoal << " kr in " << numberOfYears << " years,\n"
              << "you need to put aside approximately " << monthlySavings << " kr each month." << std::endl;

    return 0;
}


