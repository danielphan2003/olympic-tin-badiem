#include <fstream>

using namespace std;
int F[1001], a[1001], N, MAX;

int main() {
    ifstream in("day-con-don-dieu.inp");
    ofstream out("day-con-don-dieu.out");

    in >> N;
    F[0] = 0;
    MAX = 0;
    for (int i = 1; i <= N; ++i) {
        in >> a[i];

        int dem = i - 1;
        while (a[dem] > a[i])
            --dem;
            
        int tmp = F[dem];
        F[i] = tmp + 1;

        if (MAX < F[i])
            MAX = F[i];
    }
    out << MAX;
    return 0;
}