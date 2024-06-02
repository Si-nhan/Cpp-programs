#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

main()
{   
    srand(time(NULL));

    int n; 
    cout << "Nhap so con ga trong trai: ";
        cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % n;

    //Xuất ra danh sách gà
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;

    // Tìm mã số lớn nhất
    int count = a[0];
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