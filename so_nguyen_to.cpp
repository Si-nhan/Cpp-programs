#include <iostream>

using namespace std;

bool so_nguyen_to(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool ko_chua_3_5_7(int n)
{
    while (n > 0) {
        int i = n % 10;
        switch (i)
            case 3:
            case 5:
            case 7:
                return false;
        n /= 10;
    }
    return true;
}
main()
{
    int n, dem = 0;
    cout << "Nhap so n: ";
        cin >> n;
    for (int i = 1; i < n + 1; i++)
        if ((so_nguyen_to(i) == true) && (ko_chua_3_5_7(i) == true)) {
            cout << i << ' ';
            dem++;
        }
    cout << endl;
    cout << "So so nguyen to thoa man yeu cau de bai la: " << dem;
}