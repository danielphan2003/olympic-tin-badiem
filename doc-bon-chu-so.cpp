#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen khong am N < 1000 : ";
    cin >> N;

    string dv[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};
    cout << N << " doc la ";

    int 
        hangTram = N/100,
        hangDv = N%10,
        hangChuc = (N/10)%10;

    if (hangTram != 0) {
        cout << dv[hangTram] << " TRAM";
        if (hangChuc == 0) {
            if (hangDv != 0) 
                cout << " LE " << dv[hangDv];
        }
        else if (hangDv == 0) {
            cout << " " << dv[hangChuc] << " MUOI";
        }
        else 
            cout << " " << dv[hangChuc] << " MUOI " << dv[hangDv];
    }
    else if (hangChuc != 0) {
        cout << dv[hangChuc] << " MUOI";
        if (hangDv != 0) 
            cout << " " << dv[hangDv];
    }
    else cout << dv[hangDv];

    return 0;
}