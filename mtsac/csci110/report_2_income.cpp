/**
 * Prolog
 * a. Program Description
 *      Report 2, By using a program that calculates the taxes based on the marital status.
 * b. Author
 *      Genhai Yu
 * c. Date and time
 *      01/13/2025
 * d. Input variable
 *      Assume the user input the data type is correct for marital status and income.
 *      Input 1: Marital Status. Input 2: Income
 * e. Process Flow
 *      As a single, if income over threshold, single_limit * 10% for base, then (current income - threshold<32000>) * rate for over threshold<0.25>.
 *      Otherwise, just calculating income * base rate 10%
 *
 *      As a married, if income over threshold, married_limit * 10% for base, then (current income - threshold<64000>) * rate for over threshold<0.25>.
 *      Otherwise, just calculating income * base rate 10%
 * f. Out variable
 *      Based on the marital status, output the pay taxes.
 */


#include "iostream"

using namespace std;

const double RATE_1 = 0.1;
const double RATE_2 = 0.25;

const double RATE_SINGLE_LIMIT = 32000;
const double RATE_MARRIED_LIMIT = 64000;


double total_tax_return() {
    cout << "Please enter s for single, m for married: ";
    string marital_status;
    cin >> marital_status;

    double income;
    cout << "Please enter your income: ";
    cin >> income;

    double tax_1 = 0;
    double tax_2 = 0;

    if (marital_status == "s") {
        // not meet $32,000 threshold, 10% tax
        // No check input type
        if (income < RATE_SINGLE_LIMIT) {
            tax_1 = income * RATE_1;
        } else {
            // base 10%
            tax_1 = RATE_SINGLE_LIMIT * RATE_1;
            tax_2 = (income - RATE_SINGLE_LIMIT) * RATE_2;
        }
    } else if (marital_status == "m") {
        if (income < RATE_MARRIED_LIMIT) {
            // not meet $ 64,000 threshold, 10% tax
            tax_1 = income * RATE_1;
        } else {
            // base 10%
            tax_1 = RATE_MARRIED_LIMIT * RATE_1;
            tax_2 = (income - RATE_MARRIED_LIMIT) * RATE_2;
        }
    } else {
        cout << "Invalid marital status." << endl;
    }
    return tax_1 + tax_2;
}


int main() {

    double total_tax_paid = 0;

    while (true) {

        if (total_tax_paid > 0) {
            cout << "Do you want to continue (y/n)? ";
            string ans;
            cin >> ans;
            if (ans != "y") {
                cout << "Ok, you have done." << endl;
                break;
            } else {

                total_tax_paid = total_tax_return();
            }
        } else {

            total_tax_paid = total_tax_return();
        }
        if (total_tax_paid > 0) {
            cout << "The tax is $" << total_tax_paid << endl;
        } else {
            cout << "Please check your enter." << endl;
            continue;
        }
    }


    return 0;
}
