#include <iostream>

using namespace std;

main()
{
    string mat_thu, chuoi_goc;
    cout << "Nhập mật thư: ";
        cin >> mat_thu;
    for (int i = mat_thu.length() - 1, k = 2; i >= 0; i -= k, k++)
        chuoi_goc.push_back(mat_thu[i]);
    cout << "Chuỗi văn bản gốc là: " << chuoi_goc;
}