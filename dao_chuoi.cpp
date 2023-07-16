#include <iostream>
#include <algorithm>

using namespace std;

main()
{
    string s;
    cout << "Nhập chuỗi cần đảo: ";
        cin >> s;
    reverse(s.begin(), s.end());
    cout << "Chuỗi sau khi đảo: " << s;
}