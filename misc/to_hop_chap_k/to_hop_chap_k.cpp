#include <iostream>

using namespace std;

int n, k;
int C[1000010], dem_so_nghiem;

void ghi_nghiem() {
    dem_so_nghiem++;
    for (int i = 1; i <= k; i++)
        cout << C[i] << ' ';
    cout << endl;
}

void to_hop(int i) {
    for (int v = C[i-1]+1; v <= n-k+i; ++v) {
        C[i] = v;
        if (i == k) {
            ghi_nghiem();
        } else
            to_hop(i+1);
    }
}

int main() {
    cin >> n >> k;
    C[0] = 0;
    to_hop(1);
    cout << dem_so_nghiem;
}
