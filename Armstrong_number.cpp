#include <iostream>
#include <cmath>

using namespace std;

bool checkArmstrong(int n)
{
    string num_char = to_string(n);
    int sum = 0, digits = num_char.length();

    for (int i = 0; i < digits; i++)
        sum += pow(int(num_char[i])-48, digits);

    if (sum == n)
        return true;
    else 
        return false;
}

main()
{
    int n;
    cout << "Enter the number n: ";
        cin >> n;
    cout << "The Armstrong sequence from 1 to " << n << " is:" << endl;
    for (int i = 1; i <= n; i++)
        if (checkArmstrong(i))
            cout << i << ' ';
    
}