#include <iostream>

using namespace std;

int n, k;
int P[1000010], dem_so_nghiem;

void ghi_nghiem() {
    dem_so_nghiem++;
    for (int i = 1; i <= k; i++)
        cout << P[i] << ' ';
    cout << endl;
}

void chinh_hop_lap(int i) {
    for (int v = 1; v <= n; ++v) {
        P[i] = v;
        if (i == k)
            ghi_nghiem();
        else
            chinh_hop_lap(i+1);
    }
}

int main() {
    cin >> n >> k;
    P[0] = 0;
    chinh_hop_lap(1);
    cout << dem_so_nghiem;
}