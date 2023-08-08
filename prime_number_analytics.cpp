													//Prime number analytics:
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
	int analyzed_number, exp;

	cout << "Enter the number that needs to be analyzed: ";
	cin >> analyzed_number;

	cout << "The result of prime number analytics:\n";

	if (IsPrimeNumber(analyzed_number))
		cout << analyzed_number << " is a prime number";

	for (int i = 2; i <= analyzed_number; i++) 
	   if (IsPrimeNumber(i)) {
	   	  exp = 0 ;
	 	  while (!(analyzed_number % i)) {
		   	analyzed_number = analyzed_number / i;
		   	exp++;
		  }
	   	  if (exp) 
	   		cout << "The prime number " << i << " with the exponent "<< exp << endl;
		}
}
                                                                

 