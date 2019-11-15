#include <iostream>

using namespace std;

// 0 1 0 1 0 0 0 1 0 0
// 1 0 1 0 1 1 1 1 0 0
// 
// 0 0 0 0 0 0 0 1 0 0

int main() {
    int number;
    cin >> number;
    while (number) {
        cout << (number & -number) << ' ';
        number -= number & -number;
    }
    cin.get();
    return 0;
}