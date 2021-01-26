#include <iostream>

using namespace std;

void input() {
    int x;
    cin >> x;
    if (x != 0) {
        input();
        cout << x << ' '; 
    }
}

void input2() {
    int x;
    cin >> x;
    if (x != 0) {
        cout << x << ' ';
        input2();
    }
}

int main() {
    input();
    cout << "------\n";
    input2();
}