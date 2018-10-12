#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Nhap 2 so a, b : ";
    cin >> a >> b;

    if (a == 0) {
        if (b != 0) {
            cout << "Phuong trinh vo nghiem";
        }
        else cout << "Phuong trinh co vo so nghiem";
    }
    else cout << "Phuong trinh co nghiem duy nhat x = -b/a = " << -b/a;

    return 0;
}