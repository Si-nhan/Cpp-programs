#include <iostream>
using namespace std;

main() {
  string str1;
  cout << "Enter the string: ";
    getline(cin, str1);
  int len = str1.length();
  char str2[len];
  for (int i = 0; i < len; i++)
    str2[i] = str1[len-1-i];
  cout << "The reverse string is: " << str2;
}