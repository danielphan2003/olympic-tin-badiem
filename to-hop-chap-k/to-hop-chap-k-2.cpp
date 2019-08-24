#include <iostream>

using namespace std;

int C[101][101];

void tinh() {
    for (int n = 0; n <= 100; ++n)
        C[0][n] = C[n][n] = 1;
    for (int n = 1; n <= 100; ++n)
        for (int k = 1; k <= n-1; ++k)
            C[k][n] = C[k-1][n-1] + C[k][n-1];
}

int find_C(int k, int n) {
    if (C[k][n] > -1)
        return C[k][n];
    if (k == 0 || k == n)
        return C[k][n] = 1;
    else
        return C[k][n] = find_C(k-1,n-1) + find_C(k,n-1);
}

int main() {
    int a, b;
    cin >> a >> b;
    
    tinh();
    for (int k = 0; k <= 100; ++k)
        for (int n = 0; n <= 100; ++n)
            C[k][n] = -1;
    
    cout << find_C(a,b);
    return 0;
}
