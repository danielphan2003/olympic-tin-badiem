#include <fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("demo_file_2.inp");
    ofstream out;
    out.open("demo_file_2.out");

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
