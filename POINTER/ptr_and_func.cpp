#include<iostream>

using namespace std;

void passPointer(int *number) { 
   int value = 13; 
   number = &value; 
   *number = *number - 10; 
   cout << *number << endl; 
} 

int main() { 
   int num = 10 , *value; 
   value = &num; 
   passPointer(value); 
   cout << *value; 
}