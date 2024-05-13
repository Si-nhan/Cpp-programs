#include <iostream>
#include <string>

using namespace std;

string arabToRoman(int num) 
// Hàm chuyển đổi số Ả Rập thành số La Mã
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1},
        len = sizeof(values)/sizeof(values[0]);
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string roman = "";

    for (int i = 0; i < len; i++) {
        while (num >= values[i]) {
            roman += symbols[i];
            num -= values[i];
        }
    }
    return roman;
}

int main() {
    int num;
    cout << "Nhập số từ 1 đến 4000: ";
    cin >> num;

    if (num < 1 || num > 4000) {
        cout << "Số không hợp lệ!";
        return 1;
    }
    cout << "Số La Mã tương ứng là: " << arabToRoman(num) << endl;

    return 0;
}
