#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen khong am N < 1000 : ";
    cin >> N;

    string dv[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};
    cout << N << " doc la ";
    if (dv[N/100] != "") {
        cout << dv[N/100] << "TRAM ";
    }
    if (dv[N/10])
}