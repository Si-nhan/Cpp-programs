#include <iostream>

using namespace std;

main()
{
    int i, n, so_hoc_sinh, dem[5] = {0}, so_ban;

    cout << "Nhap so nhom: ";
        cin >> n;

    cout << "Nhap so hoc sinh trong moi nhom: " << endl;
        for (i = 0; i < n; i++) {
            cin >> so_hoc_sinh;
            dem[so_hoc_sinh]++;
        }
    /* moi nhom 4 nguoi ngoi 1 ban, moi nhom 3 nguoi 
    duoc ghep voi 1 nhom 1 nguoi de ngoi 1 ban */
    so_ban = dem[4] + dem[3]; 
    // cac nhom 1 nguoi con lai se duoc xep voi cac nhom con lai 
    dem[1] -= dem[3];
    // 2 nhom 2 nguoi duoc xep ngoi 1 ban
    so_ban += dem[2] / 2;
    // nhom 2 nguoi con lai (neu co) se duoc xep voi 2 nhom 1 nguoi thanh 1 ban
    if (dem[2] % 2)
        so_ban++;
    // so nhom 1 nguoi con lai se duoc xep chung voi nhau cho du 4 nguoi 1 ban
    dem[1] -= 2;
    so_ban += dem[1] / 4;
    if (dem[1] % 4)
        so_ban++;
    cout << "So ban toi thieu can xep la: " << so_ban;



}