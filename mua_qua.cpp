#include <iostream>

using namespace std;

int main() 
{
    int count = 1, price = 0, money_amount, possibilities;
    const int price_10k = 10, price_5k = 5, price_2k = 2;

    cout << "Enter the money amount: ";
        cin >> money_amount;

    while (money_amount < 64) {
        cout << "The number < 64 can't satisfy the requirement, please enter the number not less than 64: ";
        cin >> money_amount;
    }

    while (price <= money_amount) {
        count++;
        price = price_10k * count + (price_5k + 2 * price_2k) * (count + 5);
    }
    
    possibilities = count - 1;
    cout << "The number of possibilities: " << possibilities;
}