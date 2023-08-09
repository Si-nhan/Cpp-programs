                                            // The greatest prime number in the array
#include <iostream>

using namespace std;

bool IsPrimeNumber(int checked_number)
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

main()
{
	int array[] = {1, 4, 9, 8, 6, 12, 14, 15, 18}, 
        size, 
        max = 0;
    size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < size; i++) {
        if (IsPrimeNumber(array[i])) {
           max = array[i];
           for (int j = ++i; j < size; j++) 
                if (IsPrimeNumber(array[j]) && array[j] > max)
                    max = array[j];
        }
        break;
    }

    if (!max)
        cout << "-";
    else 
        cout << "The greatest prime number is " << max << endl;
}