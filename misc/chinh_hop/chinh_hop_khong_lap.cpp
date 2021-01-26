#include <iostream>

using namespace std;

int n, k;
int P[1000010], d[1000010], dem_so_nghiem;

void ghi_nghiem() {
    dem_so_nghiem++;
    for (int i = 1; i <= k; i++)
        cout << P[i] << ' ';
    cout << endl;
}

void chinh_hop_ko_lap(int i) {
    for (int v = 1; v <= n; ++v) {
        if (d[v] == 0) {
            P[i] = v;
            d[v] = 1;
            if (i == k)
                ghi_nghiem();
            else
                chinh_hop_ko_lap(i+1);
            d[v] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    P[0] = 0;
    for (int i = 1; i < n; i++) 
        d[i] = 0;
    chinh_hop_ko_lap(1);
    cout << dem_so_nghiem;
}