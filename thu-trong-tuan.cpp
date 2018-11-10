#include <iostream>
using namespace std;

int d, m;

void printIt() {
    if (m < 3)
        m += 12;
    int thu = (d + 2 * m + (3 * (m + 1)) / 5 + 2014 + 2014 / 4) % 4;
    string docThu[] = {"Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"};
    cout << d << "/" << m << "/2014 la " << docThu[thu];
};

int main()
{
    cout << "Nhap 2 so nguyen d, m : ";
    cin >> d >> m;

    switch (d) {
        case 28: 
            if (m != 2)
                cout << "Du lieu khong hop le";
            else
                printIt();
            break;
        case 30:
            if (m != 4, 6, 9, 11) 
                cout << "Du lieu khong hop le";
            else
                printIt();
            break;
        case 31:
            if (m != 1, 3, 5, 7, 8, 10, 12)
                cout << "Du lieu khong hop le";
            else
                printIt();
            break;
        default:
            cout << "Du lieu khong hop le";
            break;
    }

    return 0;
}