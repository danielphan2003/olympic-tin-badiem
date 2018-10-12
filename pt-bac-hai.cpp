#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap 3 so a, b, c : ";
    cin >> a >> b >> c;

    float Delta = b*b - 4*a*c;
    if (a == 0) {
        if (b == 0) {
            if (c != 0) {
                cout << "Phuong trinh vo nghiem";
            }
            else cout << "Phuong trinh co vo so nghiem";
        }
        else cout << "Phuong trinh co nghiem duy nhat x = " << -c/b;
    }
    else if (Delta < 0) {
        cout << "Phuong trinh vo nghiem";
    }
    else if (Delta == 0)
    {
        if ((a == 1) && (b == 0) && (c == 0)) {
            b = -b;
        }
        cout << "Phuong trinh co 1 nghiem thuc: " << -b / 2 / a;
    }
    else {
        cout << "Phuong trinh co 2 nghiem phan biet";
        cout << endl << "x1 = " << (-b + sqrt(Delta))/2/a;
        cout << endl << "x2 = " << (-b - sqrt(Delta))/2/a;
    }
    
    return 0;
}