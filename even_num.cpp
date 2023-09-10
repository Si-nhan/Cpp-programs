#include <iostream>

using namespace std;

main()
{
    int a[20], i, n, k;
    cout << "Nhập số phần tử của mảng: ";
        cin >> n;

    cout << "Nhập các phần tử của mảng: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    //Đưa các số chẵn lên đầu mảng   
    for(i = 0; i < n; i++)
        for(k = i+1; k < n; k++)
            if(a[k] % 2 == 0)
                {
                    a[i] = a[i] + a[k];
                    a[k] = a[i] - a[k];
                    a[i] = a[i] - a[k];
                    break;
                }
    cout << "Mảng sau khi sắp xếp là: "<< endl;
    for(i = 0; i < n; i++)
        cout << a[i] << " ";
}