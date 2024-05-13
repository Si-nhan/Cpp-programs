#include <iostream>
#include <string>
using namespace std;

main()
{
    int n; 
    cout << "Nhap so con ga trong trai: ";
        cin >> n;
    int a[n];
    cout << "Nhap ma so tung loai ga trong trai: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = a[0];
    // Tìm mã số lớn nhất
    for (int i = 1; i < n; i++)
        if (a[i] > count)
            count = a[i];
    // Tạo mảng chứa số lần xuất hiện của các mã số
    int num[count+1] = {0};
    for (int i = 0; i < n; i++) 
        if (a[i] >= 0) {
            num[a[i]] = 1;
            for (int j = i + 1; j < n; j++)
                if (a[j] == a[i])
                {
                    num[a[i]]++;
                    a[j] = -1;
                }
        }
    // Tìm mã số gà có số lượng lớn nhất
    int max = num[count], 
        ma_so = count;
    for (int i = count-1; i > -1; i--)
        if (num[i] > max) {
            max = num[i];
            ma_so = i;
        }      
    cout << "Ket qua: Ga ma so " << ma_so << " co so luong lon nhat va co " << max << " con";      
}