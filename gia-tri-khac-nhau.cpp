#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[10001], max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a,a+n);
    int i = 0, xuat_hien = 0;
    while (i < n) {
        int tmp = a[i], curr = i, j;
        while (a[i+1] == tmp) {
            i++;
        }
        if (i - curr != 0) {
            if (i - curr > xuat_hien) {
                xuat_hien = i - curr;
            }
            for (j = curr + 1; j < n; j++) {
                a[j] = a[j+xuat_hien+1];
                a[j+xaut_hien+1] = 0;
            }
            n = n-xuat_hien;
            i--;
        }
        else i++;
    }
    
    cout << xuat_hien << endl << n;
}