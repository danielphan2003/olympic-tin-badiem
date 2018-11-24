#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100000;

int main() {
    int n, a[N], k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a+n);
    cout << a[k];
    return 0;
}