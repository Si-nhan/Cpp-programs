#include <iostream>

using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i < n+1; i++)
        sum += i;
    return sum;
}
main()
{
    int t, a[10], n;
    cout << "Nhap so luong tong can tinh: ";
        cin >> t;
    cout << "Nhap cac so n: " << endl;
    for (int i = 0; i < t; i++) {
        cin >> n;
        a[i] = n;
    }
    cout << "Cac tong tinh duoc la: " << endl;
    for (int i = 0; i < t; i++)  {
        cout << sum(a[i]) << endl;
    }
}