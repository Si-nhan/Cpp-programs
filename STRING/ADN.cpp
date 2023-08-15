#include <iostream>
using namespace std;

main() {
  string fir_half_ADN;
  cout << "Enter the first half of ADN: ";
    getline(cin, fir_half_ADN);

  int len = fir_half_ADN.length();
  char sec_half_ADN[len];

  // Match 2 halves of the ADN 
  for (int i = 0; i < len; i++)
    switch (fir_half_ADN[i]) {
      case 'A':
        sec_half_ADN[i] = 'T';
        break;
      case 'T':
        sec_half_ADN[i] = 'A';
        break;
      case 'G':
        sec_half_ADN[i] = 'X';
        break;
      case 'X':
        sec_half_ADN[i] = 'G';
        break;
      default:
        sec_half_ADN[i] = ' ';      
    }
  cout << "The second half of ADN is: " << sec_half_ADN;
}