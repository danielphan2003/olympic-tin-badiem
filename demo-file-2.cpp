#include <fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("input/demo-file-2.inp");
    ofstream out;
    out.open("output/demo-file-2.out");

    int n, max = 0;
    in >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        in >> a[i];
        if (max < a[i])
            max = a[i];
    }
    out << max;

    in.close();
    out.close();
}
