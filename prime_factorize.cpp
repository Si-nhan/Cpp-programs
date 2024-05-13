													//Prime number analytics:
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

main()
{
	int num, exp;

	cout << "Enter the number that needs to be analyzed: ";
	cin >> num;

	cout << "The result of prime number analytics:\n";

	if (isPrimeNumber(num))
		cout << num << " is a prime number";

	for (int i = 2; i <= num; i++) 
	   if (isPrimeNumber(i)) {
	   	  exp = 0 ;
	 	  while (!(num % i)) {
		   	num = num / i;
		   	exp++;
		  }
	   	  if (exp) 
	   		cout << "The prime number " << i << " with the exponent "<< exp << endl;
		}
}
                                                                

 