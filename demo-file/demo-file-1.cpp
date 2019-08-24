#include <fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("demo-file-1.inp");
    ofstream out;
    out.open("demo-file-1.out");

    int a, b;
    in >> a >> b;
    out << a+b;

    in.close();
    out.close();
}