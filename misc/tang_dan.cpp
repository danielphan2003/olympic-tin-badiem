#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    int n = 3;
    cout << "Nhap 3 so a, b, c : ";
    cin >> a >> b >> c;

    float t[] = {a, b, c};
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (t[i] > t[j]) {
                t[i] += t[j];
                t[j] = t[i] - t[j];
                t[i] -= t[j];
            }
        }
    }

    cout << endl << "Day tang dan: " << t[0] << ' ' << t[1] << ' ' << t[2];

    return 0;
}