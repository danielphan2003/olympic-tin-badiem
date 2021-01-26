#include <fstream>

using namespace std;

int n, p[110], d[110], original_id[110];

int main() {
    ifstream in("laplich.inp");
    ofstream out("laplich.out");

    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> p[i];
    for (int i = 1; i <= n; i++) 
        in >> d[i];
    for (int i = 1; i <= n; i++) 
        original_id[i] = n - i + 1;

    // sort p[]
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++) 
            if (p[i] > p[j]) {
                swap(p[i], p[j]);
                swap(d[i], d[j]);
            }

    for (int i = 1; i <= n; i++)
}