#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("ASCII.inp");
    ofstream out;
    out.open("ASCII.out");

    int n;
    char c;
    while (!in.eof()) {
        in >> n >> c;
        out << static_cast<char> (n) << " : " << static_cast<int> (c) << endl;
    }

    in.close();
    out.close();
}