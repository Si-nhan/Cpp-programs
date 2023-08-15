#include <iostream>
using namespace std;

main() {
  string str1;
  cout << "Enter the string: ";
    getline(cin, str1);

  int len = str1.length();
  char str2[len]; // The reverse of the input string

  for (int i = 0; i < len; i++)
    str2[i] = str1[len-1-i];

  // Check the string is symmetric or not
  if (str1 == str2)
    cout << "true";
  else 
    cout << "false";
}