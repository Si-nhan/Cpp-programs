#include <iostream>
#include <string>

using namespace std;

int romanToArab(string roman)
//Hàm chuyển số La Mã thành số Ả Rập
{
    char roman_letter[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int arab_num[] = {1, 5, 10, 50, 100, 500, 1000},
        roman_letter_len = sizeof(roman_letter) / sizeof(roman_letter[0]),
        roman_len = roman.length(),
        num_arr[roman_len];

    //Chuyển chuỗi La Mã nhập vào thành mảng các số Ả Rập tương ứng
    for (int i = roman_len-1; i > -1; i--)
        for (int j = 0; j < roman_letter_len; j++) 
            if (roman[i] == roman_letter[j])
                num_arr[i] = arab_num[j];

    //Cộng trừ các số Ả Rập trong mảng đã tạo để có kết quả cuối cùng
    int number = num_arr[roman_len-1];
    for (int i = roman_len-1; i > 0; i--)
        if (num_arr[i] <= num_arr[i-1])
            number += num_arr[i-1];
        else 
            number -= num_arr[i-1];
    return number;
}
main()
{
    string roman; 
    cout << "Nhap so La Ma can chuyen: ";
        cin >> roman;
    cout << "So A Rap tuong ung la: " << romanToArab(roman);
}


    
       