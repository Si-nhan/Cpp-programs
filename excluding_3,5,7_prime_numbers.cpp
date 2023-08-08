#include <iostream>

using namespace std;

bool isPrimeNumber(int checked_number)
{
	if (checked_number == 2) 
		return true;
	else if (checked_number == 1)
		return false;

	for (int i = 2; i < checked_number; i++)
		if (!(checked_number % i)) 
			return false;

	return true;
}				

bool exclude_3_5_7(int checked_number)
{
    while (checked_number > 0) {
        int digit = checked_number % 10;
        switch (digit)
            case 3:
            case 5:
            case 7:
                return false;
        checked_number /= 10;
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