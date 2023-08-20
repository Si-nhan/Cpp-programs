#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
        cin >> n;
    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++) 
        cin >> *(ptr+i);
  
    int maxValue = *ptr;
    for (int i = 1; i < n; i++)
        if (maxValue < *(ptr+i)) 
            maxValue = *(ptr+i);
    
    cout << "The max value is: " << maxValue;
}