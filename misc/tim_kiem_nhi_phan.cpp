#include <iostream>

using namespace std;

int main()
{
    int n, a[100001], X;
    cin >> n >> X;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int dau = 0, cuoi = n - 1, pivot;
    bool found = false;
    while (!found) {
        pivot = (cuoi-dau+1)/2;
        if (a[pivot] > X) {
            dau = pivot+1;
        }
        if (a[pivot] < X) {
            cuoi = pivot-1;
        }
        if (a[pivot] = X) {
            while (a[pivot] == X) {
                pivot--;
                if (a[pivot] != X) {
                    pivot++;
                    break;
                }
            }
            found = true;
        }
    }
    
    cout << pivot+1;
}