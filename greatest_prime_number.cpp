                                            // The greatest prime number in the array
#include <iostream>
using namespace std;

bool is_prime_number(int checked_number)
{
	if (checked_number == 2) 
		return true;

	for (int i = 2; i < checked_number; i++)
		if (!(checked_number % i)) 
			return false;

	return true;
}			

main()
{
	int array[] = {1, 4, 2, 3, 5, 9, 17, 8, 11, 7, 6}, 
        size, max;
    size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
        if (is_prime_number(array[i])) {
           max = array[i];
           for (int j = ++i; j < size; j++) 
                if (is_prime_number(array[j]) && array[j] > max)
                    max = array[j];
           cout << "The greatest prime number is " << max << endl;
        break;
        }
}