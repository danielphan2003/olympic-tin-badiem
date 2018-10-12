#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen khong am co 1 chu so: ";
    cin >> N;

    string s[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};
    if ((N < 0) || (N > 9)) {
        cout << "Cung ranh qua ha";
    }
    else {
        cout << N << " doc la " << s[N];
    }

    return 0;
}