#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        int l, r, s;
        cin >> l >> r >> s;
        int idx = lower_bound(a + l - 1, a + r, s) - a;
        if (idx < r && a[idx] >= s) {
            cout << a[idx] << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}


/*if ((l <= s) && (s <= r))
            for (int i = 0; i < n - 1; i++)
                if ((a[i] < s) && (a[i+1] >= s) && (a[i+1] <= r))
                    cout << a[i+1];
        else if (s < l)
            cout << l;
        else 
            cout << -1;*/