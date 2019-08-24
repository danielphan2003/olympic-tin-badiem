/**
 * int fibo(int k) {
    if (k == 1 || k == 0)
        return 1
    else
        return fibo(k-1)+fibo(k-2)
}
*/
#include <fstream>
using namespace std;

int F[2], N, tmp;

int main() {
    ifstream in("fibo.inp");
    ofstream out("fibo.out");

    in >> N;
    F[1] = 1;
    F[0] = F[1];
    int i = 1;
    while (i <= N) {
        i++;
        tmp = F[0];
        F[0] = F[1];
        F[1] += tmp;
    }
    out << F[1];
    return 0;
}