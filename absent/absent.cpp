#include <iostream>
using namespace std;

int main() {
    int N;
    //cout << "Nhap so N: ";
    cin >> N;

    int a[N], sum = 0, S = N*(N+1)/2;
    for (int i = 1; i < N; i++) {
        // cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
        sum += a[i];
    }
    cout << S - sum;
    return 0;
}
