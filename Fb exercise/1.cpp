/*Tạo một mảng các số nguyên không âm nhập từ bàn phím, 
xuất ra mảng các số ấy theo thứ tự tần suất xuất hiện giảm dần*/
#include <iostream>

using namespace std;

void MaxToMin(int arr[], int n)
{
   for (int i = 0; i < n; i++)
      for (int j = n-1; j > i; j--)
         if (arr[i] < arr[j]) {
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
         }
}

int main()
{
   int amount;
   cout << "Enter amount of numbers: ";
      cin >> amount;

   //Create an array of non-negative numbers
   int num_arr[amount];
   cout << "Enter numbers: ";
   for (int i = 0; i < amount; i++)
      cin >> num_arr[i];

   //Get the max number in the array
   int max = num_arr[0];
   for (int i = 1; i < amount; i++)
      if (num_arr[i] > max)
         max = num_arr[i];

   /*Create an array of numbers frequencies, 
   f_arr[i] is the frequency of the number i*/ 
   int f_arr[max+1] = {0};
   for (int i = 0; i < amount; i++) {
      int id = num_arr[i];
      f_arr[id]++;
   }
   cout << "f arr: ";
   for (int i = 0; i <= max; i++) 
      cout << f_arr[i]<< ' ';
   cout << endl;

   //Create a copy of f_arr[]
   int copy_arr[max+1] = {0};
   for (int i = 0; i <= max; i++) 
      copy_arr[i] = f_arr[i];

   /*After arrange the copy array from max to min, 
   the f_arr[] is the reference*/
   MaxToMin(copy_arr, max+1);
   cout << "copy arr: ";
   for (int i = 0; i <= max; i++) 
      cout << copy_arr[i]<< ' ';
   cout << endl;

   //Create an array that stores the numbers based on their frequencies, in the order of most to least
   int most_to_least[max+1];
   for (int i = 0; i <= max; i++) 
      for (int j = 0; j <= max; j++)
         if (f_arr[j] == copy_arr[i]) {
            static int k = 0;
            most_to_least[k] = j;
            k++;
         }

   for (int i = 0; i <= max; i++) 
      cout << most_to_least[i] << ' ';
}
