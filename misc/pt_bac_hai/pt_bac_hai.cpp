#include <fstream>
#include <cmath>
using namespace std;

int main()
{   
    ifstream in("pt_bac_hai.inp");
    ofstream out("pt_bac_hai.out");
    
    float a, b, c;
    in >> a >> b >> c;

    float Delta = b*b - 4*a*c;
    if (a == 0) {
        if (b == 0) {
            if (c != 0) {
                out << "NO SOLUTION";
            }
            else out << "ALL REAL NUMBERS";
        }
        else out << "x = " << -c/b;
    }
    else if (Delta < 0) {
        out << "NO SOLUTION";
    }
    else if (Delta == 0)
    {
        if ((a == 1) && (b == 0) && (c == 0)) {
            b = -b;
        }
        out << "x = " << -b / 2 / a;
    }
    else {
        out << endl << "x1 = " << (-b + sqrt(Delta))/2/a;
        out << endl << "x2 = " << (-b - sqrt(Delta))/2/a;
    }
}