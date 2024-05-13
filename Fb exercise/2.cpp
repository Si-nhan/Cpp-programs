#include <iostream>
#include <string>
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
    int m, n; 
    cout << "Nhap so bo duc va bo cai trong trai: ";
        cin >> m >> n;
    cout << "Nhap can nang cua bo duc: ";
        int a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
    cout << "Nhap can nang cua bo cai: ";
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];
    sapxep(a,m);
        for (int i = 0; i < m; i++)
            cout << a[i] << ' ';
        cout << endl;
    sapxep(b,n);
        for (int i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << endl;
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if ((b[j] > 0) && (a[i] > b[j])) {
                dem++;
                b[j] = -1;
                break;
            }
    cout << "So cap ghep duoc la: " << dem;
}


    
       