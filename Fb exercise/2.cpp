#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void sapxep(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] < arr[j]) 
            {   int tam = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tam;
            }
}

main()
{
    srand(time(NULL));

    int bo_duc, bo_cai; 
    cout << "Nhap so bo duc va bo cai trong trai: ";
        cin >> bo_duc >> bo_cai;

    //Tạo danh sách cân nặng bò đực
    int a[bo_duc];
    for (int i = 0; i < bo_duc; i++)
        a[i] = rand() % bo_duc + 1;

    //Tạo danh sách cân nặng bò cái
    int b[bo_cai];
    for (int i = 0; i < bo_cai; i++)
        b[i] = rand() % bo_cai + 1;

    //Sắp xếp danh sách theo thứ tự giảm dần để so sánh
    sapxep(a,bo_duc);
        for (int i = 0; i < bo_duc; i++)
            cout << a[i] << ' ';
        cout << endl;

    sapxep(b,bo_cai);
        for (int i = 0; i < bo_cai; i++)
            cout << b[i] << ' ';
        cout << endl;

    int dem = 0;
    for (int i = 0; i < bo_duc; i++)
        for (int j = 0; j < bo_cai; j++)
            if ((b[j] > 0) && (a[i] > b[j])) {
                dem++;
                b[j] = -1;
                break;
            }
    cout << "So cap ghep duoc la: " << dem;
}


    
       