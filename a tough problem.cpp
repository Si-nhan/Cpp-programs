/*Input: a positive integer
  Output: the smallest number with no repeated digit and the sum of its digits is the input*/
#include <iostream>

using namespace std;

int digitSum(int n)
{
	int sum = 0;
   while (n > 0) {
      int digit = n % 10;
      sum += digit;
      n /= 10;
   }
   return sum;
}
bool diffDigit(int n)
{
   int digit_arr[10] = {0}, digit;
   while (n > 0) {
      digit = n % 10;
      if (digit_arr[digit])
         return false;
      digit_arr[digit] = 1;
      n /= 10;
   }
   return true;
}

main()
{
    int n, i;
    cout << "Input: ";
      cin >> n;
   i = 1;
   bool condition = (digitSum(i) == n) && (diffDigit(i));
   while (!condition) { 
      i++;
      condition = (digitSum(i) == n) && (diffDigit(i));
   }
    cout << "Output: " << i;
}


