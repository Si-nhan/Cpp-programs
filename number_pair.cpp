/*Bạn là chủ của một buổi dạ hội có N người, bạn phân phát cho mỗi người một con số. Đến cuối buổi bạn thông báo 
"Những người có số giống nhau sẽ là một cặp". 
Vậy liệu trong buổi tiệc có ai không có cặp không? Nếu có hãy in ra người không có cặp, trong trường hợp không có in ra "-1"*/

#include <iostream>

using namespace std; 

//{ Driver Code Starts.
int main() 
{ 
        int people, i, j,
            count = 0;

        cout << "Enter the number of people: ";
            cin >> people;

        int num_arr[people],              // num_arr is the array of numbers for the people 
            occurrences[people] = {0};          // occurrences[i] is the occurrences of number i in the num_arr

        cout << "Enter numbers: ";
        for (i = 0; i < people; i++) {
            cin >> num_arr[i];
            j = num_arr[i];
            occurrences[j]++;
        }

        for (i = 0; i < people; i++) 
            if (occurrences[i] % 2) {
                cout << "The number that isn\'t paired is " << i << endl;
                count++;
            }
        if (!count)
            cout << -1;
    return 0; 
}