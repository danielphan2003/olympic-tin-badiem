#include <iostream>
#include <fstream>

using namespace std;
int n, t[21], S;
int x[21], kq[21], soToKQ = 21;

void quayLui(int i, int sum, int cnt) {
    for (int choose = 0; choose <= 1; ++choose) {
        x[i] = choose;
        sum += choose * t[i];
        cnt += choose;
        if (i == n) {
            if (sum == S && cnt < soToKQ) {
                soToKQ = cnt;
                for (int j = 1; j <= i; ++j)
                    kq[j] = x[j];
            }
        }
    }
}

int main() {
    ifstream in("atm.inp");
    ofstream out("atm.out");

    in >> n >> S;
    for (int i = 1; i <= n; ++i) 
        in >> t[i];
    
    quayLui(1, 0, 0);
    out << soToKQ << endl;
    for (int i = 1; i <= n; ++i)
        if (kq[i])
            out << t[i] << ' ';
    
    return 0;
}