#include <iostream>

using namespace std;
int F[1001], a[1001], N, MAX;

int main() {
    cin >> N;

    F[0] = 0;
    MAX = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> a[i];

        int dem = i - 1;
        while (a[dem] > a[i])
            --dem;
            
        int tmp = F[dem];
        F[i] = tmp + 1;

        if (MAX < F[i])
            MAX = F[i];
    }

    cout << MAX;
    return 0;
}