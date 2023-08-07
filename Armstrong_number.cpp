#include <iostream>
#include <cmath>

using namespace std;

bool check_Armstrong(int n)
{
    string chuoi_so = to_string(n);
    int tong = 0, so_chu_so = chuoi_so.length();

    for (int i = 0; i < so_chu_so; i++)
        tong += pow(int(chuoi_so[i]) - 48, so_chu_so);

    if (tong == n)
        return true;
    else 
        return false;
}

main()
{
    int n;
    cout << "Enter the number n: ";
        cin >> n;
    cout << "The Armstrong sequence from 1 to " << n << " is:" << endl;
    for (int i = 1; i <= n; i++)
        if (check_Armstrong(i))
            cout << i << ' ';
    
}