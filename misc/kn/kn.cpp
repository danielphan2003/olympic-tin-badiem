#include <fstream>

using namespace std;

ifstream in;
ofstream out;
int n, k;
int C[15];

void ghi_nghiem() {
    for (int i = 1; i <= k; i++)
        out << C[i] << ' ';
    out << endl;
}

void to_hop(int i) {
    for (int v = C[i-1]+1; v <= n-k+1; ++v) {
        C[i] = v;
        if (i == k)
            ghi_nghiem();
        else 
            to_hop(i+1);
    }
}

int main() {
    in.open("kn.inp");
    out.open("kn.out");

    in >> n >> k;
    C[0] = 0;
    to_hop(1);
    
    in.close();
    out.close();
}