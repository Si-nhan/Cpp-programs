/*N(input) numbers have a product of P(input), 
what is the max common divider(output) of those numbers?*/
#include <iostream>
#include <cmath>

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
	int num, P; 

	cout << "Enter the amount of numbers: ";
        cin >> num;
    cout << "Enter the product of the numbers: ";
	    cin >> P;

    int exp,
        prime_num_arr[10] = {0};
	for (int i = 2; i <= P; i++) 
	   if (isPrimeNumber(i)) {
	   	  exp = 0 ;
	 	  while (!(P % i)) {
		   	P = P / i;
		   	exp++;
		  }
	   	  prime_num_arr[i] = exp;
		}

    int max_divider = 1;
    for (int i = 2; i < 10; i++)
        if (prime_num_arr[i]) {
            int exp = prime_num_arr[i] / num;
            max_divider *= pow(i, exp);
        }
    cout << "The max common divider of the numbers is: " << max_divider;
}
                                                                

 