#include <fstream>

using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("intruder.inp");
    out.open("intruder.out");

    int n, a[10000010], S1 = 0, S2 = 0;
    in >> n;
    for (int i = 0; i < n-1; i++) {
        in >> a[i];
        S1 += a[i];
        S2 += i;
    }
    S2 += n;
    out << S2 + 1 - S1;

    in.close();
    out.close();
}