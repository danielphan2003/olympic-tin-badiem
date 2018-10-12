#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Nhap 2 so a, b : ";
    cin >> a >> b;

    float max;
    a>b?(max=a):(max=b);
    cout << endl << "So lon hon: " << max;
    return 0;
}