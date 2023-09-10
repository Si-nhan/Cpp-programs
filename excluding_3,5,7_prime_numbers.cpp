#include <iostream>

using namespace std;

bool isPrimeNumber(int n)
{
	if (n == 2) 
		return true;
	else if (n == 1)
		return false;

	for (int i = 2; i < n; i++)
		if (!(n % i)) 
			return false;

	return true;
}				

bool exclude_3_5_7(int n)
{
    while (n > 0) {
        int digit = n % 10;
        switch (digit)
            case 3:
            case 5:
            case 7:
                return false;
        n /= 10;
    }
    return true;
}
main()
{
    int number, count = 0;
    cout << "Enter the number: ";
        cin >> number;
    for (int i = 1; i < number + 1; i++)
        if (isPrimeNumber(i) && exclude_3_5_7(i)) {
            cout << i << ' ';
            count++;
        }
    cout << endl;
    cout << "The amount of satisfactory prime numbers: " << count;
}