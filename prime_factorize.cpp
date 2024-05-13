													//Prime number factorization:
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

	cout << "Enter the number that needs to be factorized: ";
	cin >> num;

	cout << "The result of prime number factorization: " << endl;

	//Check if the input is a prime number itself
	if (isPrimeNumber(num))
		cout << num << " is a prime number";

	//When the input isn't a prime number, factorize it
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
                                                                

 