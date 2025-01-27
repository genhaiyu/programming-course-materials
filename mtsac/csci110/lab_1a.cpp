/**
 * Prolog
 * a. Program Description
 *      Ask the current user to enter each of the costs of the marking campaign
 *      (advertising, marketing personnel salaries, and sales staff commissions),
 *      then based on the number of new customers, and calculate the Customer Acquisition Cost.
 * b. Author
 *      Genhai Yu
 * c. Date and time
 *      01/09/2025
 * d. Input variable
 *      advertising_cost, marketing_personnel_salaries, sale_staff_commissions, new_number_customers
 * e. Process Flow
 *      Based on input of (A = 12000 + M = 11000 + S = 5700) / NC (new_number_customers)
 * f. Out variable
 *      Then presents the Cost of Customer Acquisition.
 */

#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    // advertising cost = A, marketing personnel salaries = M, sales staff commissions = S, new_number_customers = NC
    float advertising_cost, marketing_personnel_salaries, sale_staff_commissions, new_number_customers, customer_acquisition_cost;

    // Formula: customer_acquisition_cost =  (A + M + S) / NC,
    // Parameters = Given (A = 12000 + M = 11000 + S = 5700) / NC = 15

    cout << "Please enter the cost of advertising: $";
    cin >> advertising_cost;
    cout << "Please enter the cost of marketing personnel salaries: $";
    cin >> marketing_personnel_salaries;
    cout << "Please enter the cost of sales staff commissions: $";
    cin >> sale_staff_commissions;
    cout << "Please enter the number of new customers acquired: ";
    cin >> new_number_customers;

    // Calculation for the Customer Acquisition Cost based on the input of the A, M, S, NC
    customer_acquisition_cost =
            (advertising_cost + marketing_personnel_salaries + sale_staff_commissions) / new_number_customers;

    cout << "The customer acquisition cost is: $" << customer_acquisition_cost << endl;

    return 0;
}
