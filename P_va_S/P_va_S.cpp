#include <fstream>
using namespace std;

int main()
{
    ifstream in("P_va_S.inp");
    ofstream out("P_va_S.out");
    
    while (!in.eof()) {
        float a, b;
        in >> a >> b;

        float P = 2*(a + b), S = a*b;
        out << P << " " << S << endl;
    }
}