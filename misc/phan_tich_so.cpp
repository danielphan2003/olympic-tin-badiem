#include <fstream>

using namespace std;
int F[101], N;

int main() {
    ifstream in("phan_tich_so.inp");
    ofstream out("phan_tich_so.out");

    for(int k = 1; k <= N; ++k)
        F[k] = 0;
    F[0] = 1;

    for (int m = 1; m <= N; ++m) 
        for (int v = 0)
}