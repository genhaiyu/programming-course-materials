/**
 10. Largest and Smallest

Design a program with a loop that lets the user enter a series of numbers.
 The user should enter -99 to signal the end of the series. After all the numbers have been entered,
 the program should display the largest and smallest numbers entered.

Test Case: Please ask the user to enter the following numbers to test your program.
32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65, -99

 *
      Prolog
 * a. Program Description

    Design a program with a loop that lets the user enter a series of numbers.
    The user should enter -99 to signal the end of the series. After all the numbers have been entered,
    the program should display the largest and smallest numbers entered.
 * b. Author
        Genhai Yu
 * c. Date and time
 *      01/16/2025
 * d. Input variable
        // remove comma
        // 32 54 67.5 29 35 80 115 44.5 100 65 -99
 * e. Process Flow
        // swap from left to right
 * f. Out variable
        The biggest is:
        The smallest is:
 */

#include "iostream"

using namespace std;

int main() {

    // remove comma
    // 32 54 67.5 29 35 80 115 44.5 100 65 -99
    double biggest = 0;
    double smallest = 0;
    float input_no = 0;
    int count = 0;
    cout << "Please enter a string of input values: " << endl;
    while (cin >> input_no) {
        if (input_no == -99) {
            break;
        } else {

            if (input_no > biggest) {
                biggest = input_no;
            }
            // This is for the first time assign the value to the smallest
            // Because this test needs to paste the value to the console
            if (count == 0) {
                smallest = biggest;
                count++;
            } else if (input_no < biggest && input_no < smallest) {
                smallest = input_no;
            }

        }
    }

    cout << "The biggest is: " << biggest << endl;
    cout << "The smallest is: " << smallest << endl;
    return 0;
}
