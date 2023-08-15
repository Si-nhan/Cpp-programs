/*Với một bảng gồm n dòng m cột được tô màu bởi trắng và đen. 
Ta nhìn được trên bảng có những đường thẳng màu đen dài và đẹp. 
Vậy hãy đo hộ Tek4 xem đường thẳng nào dài nhất nhé. 
Biết rằng đường thẳng này sẽ không có đường đứt đoạn và không phải là đường kẻ chéo.*/

#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout << "Enter the amount of rows and columns: ";
        cin >> row >> col;
    int arr[row][col];
    cout << "Create the array of 0 and 1: ";
    //You enter digits 0 and 1 here, 0 is white and 1 is black
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    cout << "The first print: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    cout << "The second print: " << endl;
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    int black_line[row] = {0};
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col-1; j++)
            if (arr[i][j] && arr[i][j+1])
                black_line[i]++;

    int max = black_line[0];
    for (int i = 1; i < row; i++)
        if (black_line[i] > max)
            max = black_line[i];
    cout << "The length of the longest line is: " << max + 1;     
}
