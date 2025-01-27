/**
 13. Stock Transaction Program

 Last month Jaden purchased some stock in Acme Software, Inc. Here are the details of the purchase:
● The number of shares that Jaden purchased was 1,000.
● When Jaden purchased the stock, he paid $32.87 per share.
● Jaden paid his stockbroker a commission that amounted to 2 percent of the amount he paid for the stock.

 Two weeks later Jaden sold the stock. Here are the details of the sale:
● The number of shares that Jaden sold was 1,000.
● He sold the stock for $33.92 per share.
● He paid his stockbroker another commission that amounted to 2 percent of the amount he received for the stock.

 Design a program that displays the following information:
● The amount of money Jaden paid for the stock.
● The amount of commission Jaden paid his broker when he bought the stock.
● The amount that Jaden sold the stock for.
● The amount of commission Jaden paid his broker when he sold the stock.
● Display the amount of profit or loss after Jaden sold the stock and paid his broker(both times).

 *
 * Prolog
 * a. Program Description
 *      By using a program to explain Jaden buys the stocks whether is profit or loss money
 * b. Author
 *      Genhai Yu
 * c. Date and time
 *      01/09/2025
 * d. Input variable
 *     The number of purchased stocks, price of per stock purchased.
 *     The number of sold stocks, price of per stock sold.
 * e. Process Flow
 *      Based on the input of purchased numbers and per price, and gives the purchased commission, then display total spent.
 *      Based on the input of sold numbers and per price, and gives the sold commission,
 *      then display the if profit or loss after total sold subtract sold commission,
 * f. Out variable
 *      Gives the purchased commission and sold commission, and whether profit or loss money based on the input.
 */

#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    // 1000
    int purchased_number_shares;
    // purchased per share $ 32.87
    float purchased_per_stock_price;


    cout << "Please enter the purchased number of shares: ";
    cin >> purchased_number_shares;
    cout << "Please enter the purchased price of per share: $";
    cin >> purchased_per_stock_price;

    // total purchased stock commission paid
    float total_purchased_stock_paid_commission = purchased_number_shares * purchased_per_stock_price * 0.02;
    // total purchased spent
    float total_purchased_spent =
            total_purchased_stock_paid_commission + purchased_per_stock_price * purchased_number_shares;
    cout << "The total purchased spent: $" << total_purchased_spent << endl;
    cout << "The purchased total commission is: $" << total_purchased_stock_paid_commission << endl;


    cout << "---------------------------------------------" << endl;
    cout << "| Two weeks later, Jaden was sold his stocks |" << endl;
    cout << "---------------------------------------------" << endl;
    // Two weeks later
    // 1000
    int sold_number_shares;
    // $ 33.92
    float sold_per_stock_price;

    cout << "Please enter the sold number of shares: ";
    cin >> sold_number_shares;
    cout << "Please enter the sold price of per share: $";
    cin >> sold_per_stock_price;

    // Total sold stock commission paid
    float total_sold_stock_paid_commission = sold_number_shares * sold_per_stock_price * 0.02;
    // Total sold received money
    float total_sold_received = sold_per_stock_price * sold_number_shares - total_sold_stock_paid_commission;
    cout << "The total sold received: $" << total_sold_received << endl;
    cout << "The sold total commission is: $" << total_sold_stock_paid_commission << endl;

    double is_profit_loss = total_sold_received - total_purchased_spent;
    double to_round_money = ceil(is_profit_loss * 100.0) / 100.0;
    if (to_round_money > 0)
        cout << "Jaden gets profit is: $" << to_round_money << endl;
    else
        cout << "Jaden loss money is: $" << fabs(to_round_money) << endl;
    return 0;
}
