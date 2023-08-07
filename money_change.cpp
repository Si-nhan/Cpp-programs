                                                                        //Money_change:
#include <iostream>

using namespace std;

void money_change(int amount)
{
    int bills, 
        value[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 9; i++) {
        if (amount <= value[i])
            continue;
        bills = amount / value[i];
        amount -= bills * value[i];
        cout << value[i] << ": " << bills << " bills" << endl;
    }
}
int main() {
    // Write C++ code here
    int origin_bill;
    cout << "Enter the bill that needs to be changed: ";
    cin >> origin_bill;
    cout << "The result: "<< endl;
    money_change(origin_bill);
    return 0;
}