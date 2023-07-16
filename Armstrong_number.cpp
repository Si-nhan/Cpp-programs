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
    cout << "Nhập số n: ";
        cin >> n;
    cout << "Dãy số Armstrong trong đoạn từ 1 đến " << n << " là:" << endl;
    for (int i = 1; i <= n; i++)
        if (check_Armstrong(i) == true)
            cout << i << ' ';
    
}