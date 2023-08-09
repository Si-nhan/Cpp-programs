                                                   //Perfect number:
#include <iostream>

using namespace std;

main()
{
	int number, 
        sum = 0;

	cout << "Enter the number: ";
	cin >> number;

	for (int i = 1; i < number; i++)
		if (!( number % i))
			sum += i;
            
	if (sum == number)
		cout << number <<" is a perfect number!" << endl;
	else
		cout<< number << " isn\'t a perfect number!" << endl;
}