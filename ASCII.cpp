#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap 1 so nguyen: ";
    cin >> n;

    cout << "Ky tu tuong ung: " << static_cast<char> (n) << endl;

    char c;
    cout << "Nhap 1 ky tu: ";
    cin >> c;
    cout << "Ma ASCII: " << static_cast<int> (c);

    return 0;
}