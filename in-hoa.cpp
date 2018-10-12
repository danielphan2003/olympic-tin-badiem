#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Nhap ki tu in thuong c: ";
    cin >> c;

    char t = toupper(c);

    cout << endl << "IN HOA: " << t;

    return 0;
}