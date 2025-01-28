/**
 Please work on p9 on page 282

 A painting company has determined that for every 115 square feet of wall space,
 one gallon of paint and eight hours of labor will be required.
 The company charges $20.00 per hour for labor.


 Design a modular program that asks the user to enter the square feet of wall space to be painted and the price of the paint per gallon.
 The program should display the following data:

    1.	The number of gallons of paint required.
    2.	The hours of labor required.
    3.	The cost of the paint
    4.	The labor charges.
    5.	The total cost of the paint job

 Test Case:
Total wall space = 2300 square feet
The cost for a gallon of paint = $11.50



 *
      Prolog
 * a. Program Description
    Calculate the number of gallons of paint required, hours of labor required, cost of the paint, labor charges,
    and total cost by based on the input of the square and the price of per gallon.

 * b. Author
        Genhai Yu
 * c. Date and time
 *      01/27/2025
 * d. Input variable
        float square;
        float price_per_gallon;
 * e. Process Flow
        3 modular that calculates the hours and labor charges of input square,
        and calculates the cost of paint based on the input of price per gallon.

 * f. Out variable
    float gallon_required
    double needed_hours
    double cost_of_paint
    double labor_of_charge
    double total_cost
 */

#include "iostream"

using namespace std;

// needed_hours
double needed_hours(float square) {
    return 8 * round(float((square / 115)));
}

// cost_paint
double cost_paint(float price_per_gallon, float square) {
    return price_per_gallon * round(float((square / 115)));
}

// labor_charge
double labor_charge(float PER_HOUR_PRICE, float square) {
    return 8 * PER_HOUR_PRICE * round(float((square / 115)));
}


int main() {

    while (true){

        const float PER_HOUR_PRICE = 20;

        cout << "Please enter the square feet of wall space to be painted: " << endl;
        float square;
        cin >> square;
        cout << "Please enter the price of the paint per gallon: $";
        float price_per_gallon;
        cin >> price_per_gallon;

        if(square < 0 || price_per_gallon < 0){
            cout << "The number of the square or price of gallon is incorrect.: " << endl;
            break;
        }

        // needed_hours
        double hours = needed_hours(square);
        // cost_paint
        double cost_of_paint = cost_paint(price_per_gallon, square);
        // labor_charge
        double labor_of_charge = labor_charge(PER_HOUR_PRICE, square);
        // gallon_required
        float gallon_required = round(float((square / 115))) * 1;


        double total_cost = labor_of_charge + cost_of_paint;


        if(total_cost > 0){
            cout << "The number of gallons of paint required: " << gallon_required << " gallon." << endl;
            cout << "The hours of labor required: " << hours << " hours." << endl;
            cout << "The cost of the paint: $" << cost_of_paint << endl;
            cout << "The labor charges: $" << labor_of_charge << endl;
            cout << "The total cost of the paint job: $" << total_cost << endl;
        } else {
            cout << "Sorry, the program cannot calculate the costs." << endl;
        }

        cout << "Do you want to continue (y/n)? ";

        string ans;
        cin >> ans;
        if (ans != "y") {
            cout << "Thank you for using this application, bye!" << endl;
            break;
        }

    }

    return 0;
}
