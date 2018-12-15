#include <fstream>
#include <algorithm>

using namespace std;

int n, a[10000010];

void pop(int pos) {
    for (int i = pos; i < n; i++) {
        a[i] = a[i+1];
    }
    n--;
}

int main() {
    ifstream in;
    ofstream out;
    in.open("odd.inp");
    out.open("odd.out");

    in >> n;
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    sort(a, a+n);
    int i = 0;
    while (i < n) {
        if (a[i] == a[i+1]) {
            pop(i);
            if (a[i+1] != a[i+2]) {
                out << a[i];
                in.close();
                out.close();
                break;
            }
        }
        i++;
    }
}