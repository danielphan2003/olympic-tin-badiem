#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Nhap 2 so a, b : ";
    cin >> a >> b;
    
    float 
        P = 2*(a + b), 
        S = a*b;
    cout << endl << "Chu vi: " << P << endl;
    cout << "Dien tich: " << S << endl;
    return 0;
}