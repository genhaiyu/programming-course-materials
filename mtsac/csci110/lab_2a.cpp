/**
 7. Software Sales

A software company sells a package that retails for $99. Quantity discounts are given according to the following table:
    Quantity Discount
    10–19 20%
    20–49 30%
    50–99 40%
    100 or more 50%

Design a program that asks the user to enter the number of packages purchased.
The program should then display the amount of the discount (if any) and the total amount of the purchase after the discount.


 *
      Prolog
 * a. Program Description
        By using a program to calculate the discount of purchased software and the total prices after the discount for purchased software.
 * b. Author
        Genhai Yu
 * c. Date and time
 *      01/12/2025
 * d. Input variable
        Case 1: Quantity = 5
        Case 2: Quantity = 15
        Case 3: Quantity = 25
        Case 4: Quantity = 75
        Case 5: Quantity = 125
 * e. Process Flow
        Based on the input of quantity and calculate the prices of discount and total purchase.
 * f. Out variable
        Gives the amount of discount and total purchase.
 */

#include "iostream"
#include <tuple>

using namespace std;

// sells a package that retails for $99
const int A_PACKAGE_RETAIL = 99;
const int NO_DISCOUNT = 0;
const float DISCOUNT_2 = 0.2;
const float DISCOUNT_3 = 0.3;
const float DISCOUNT_4 = 0.4;
const float DISCOUNT_5 = 0.5;


pair<double, double> calculate_discount_purchase(int numbers, float rate) {
    // Display the amount discount of each purchase, and price after discount
    double amount_discount, purchase_after_discount;
    amount_discount = A_PACKAGE_RETAIL * numbers * rate;
    purchase_after_discount = A_PACKAGE_RETAIL * numbers - amount_discount;
    return make_pair(amount_discount, purchase_after_discount);
}


int main() {


    while (true) {
        cout << "Please enter the number of packages purchase: ";
        // Input variable
        int numbers;
        cin >> numbers;

        if (numbers > 0) {
            pair<double, double> purchase_process;
            if (numbers < 10) {
                purchase_process = calculate_discount_purchase(numbers, NO_DISCOUNT);
            } else if (numbers >= 10 && numbers < 20) {
                purchase_process = calculate_discount_purchase(numbers, DISCOUNT_2);
            } else if (numbers >= 20 && numbers < 50) {
                purchase_process = calculate_discount_purchase(numbers, DISCOUNT_3);
            } else if (numbers >= 50 && numbers < 100) {
                purchase_process = calculate_discount_purchase(numbers, DISCOUNT_4);
            } else if (numbers >= 100) {
                purchase_process = calculate_discount_purchase(numbers, DISCOUNT_5);
            }

            cout << "You purchased " << numbers << " software, discount is: $" << purchase_process.first << endl;
            cout << "After discount, the price is: $" << purchase_process.second << endl;

            cout << "Do you want to continue (y/n)? ";
            string ans;
            cin >> ans;

            if (ans != "y") {
                cout << "Ok, you have done." << endl;
                break;
            }
        } else {
            cout << "Sorry, the numbers you have entered did not match our system." << endl;
            continue;
        }

    }
    return 0;
}
