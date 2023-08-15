#include <iostream>
#include <cmath>

using namespace std;

void minToMax(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    for (int j = n-1; j > i; j--)
      if (arr[i] > arr[j]) {
        arr[i] += arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] -= arr[j];
      }
}

main() 
{
  string digit; // The string of digits separated by spaces

  cout << "Enter digits: ";
    getline(cin, digit);

  int len = digit.length(), 
      arr_len = (len+1)/2, 
      int_arr[arr_len]; // The array of digits

  for (int i = 0; i < len; i++)
    if (digit[i] != ' ') {
      static int j = 0;
      int_arr[j] = int(digit[i]) - 48;
      j++;
    }
  minToMax(int_arr, arr_len);
  
  int number = 0; // The possible max number
  for (int i = arr_len - 1; i >= 0; i--)
    number += int_arr[i]*pow(10,i); 
  cout << "The result is: " << number;
}

  