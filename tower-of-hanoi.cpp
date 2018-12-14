#include <iostream>
using namespace std;

void move(int n, int x, int y) {
    if (n == 1) 
        cout << "";
    else {
        move(n-1, x, 6-x-y);
        move(1, x, y);
        move(n-1, 6-x-y, y);
    }
}