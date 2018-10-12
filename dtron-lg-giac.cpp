#include <iostream>
using namespace std;

int main()
{
    float N;
    cout << "Nhap so do N: ";
    cin >> N;

    int dem = 0, t;
    for (int i = 0; i < 360; i += 90) {
        dem++;
        if ((N >= i) && (N < i + 90)) {
            t = dem;
        }
    }

    cout << endl << "So do N thuoc cung phan tu so " << t << " cua duong tron luong giac";
    return 0;
}