                                                   //Perfect number:
#include <iostream>
#include <string>

using namespace std;

main()
{
	int number, 
        sum = 0;

	cout << "Nhap so a: ";
	cin >> number;

	for (int i = 1; i < number; i++)
		if (!( number % i))
			sum += i;
            
	if (sum == number)
		cout << number <<" is a perfect number!" << endl;
	else
		cout<< number << " isn\'t a perfect number!" << endl;
}