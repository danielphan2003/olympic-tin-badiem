#include <fstream>
using namespace std;

int main()
{
    ifstream in("so-lon.inp");
    ofstream out("so-lon.out");

    float a, b;
    in >> a >> b;

    float max;
    a > b ? max = a : max = b;
    out << max;
}