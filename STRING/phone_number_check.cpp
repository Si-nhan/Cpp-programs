#include <iostream>
using namespace std;

main() {
  string phone_num;
  cout << "Enter the phone number to check: ";
    getline(cin, phone_num);
  int len = phone_num.length();
  if (phone_num[0] != '0')
    cout << "false";
  else if (len != 10)
    cout << "false";
  else
    cout << "true";
}