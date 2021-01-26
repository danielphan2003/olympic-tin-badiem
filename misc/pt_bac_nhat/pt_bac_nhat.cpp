#include <fstream>
using namespace std;

int main()
{
    ifstream in("pt_bac_nhat.inp");
    ofstream out("pt_bac_nhat.out");

    while (!in.eof())
    {
        float a, b; 
        in >> a >> b;

        if (a == 0) 
        {
            if (b != 0) 
                out << "NO SOLUTION" << endl;
            else out << "ALL REAL NUMBERS" << endl;
        }
        else 
            out << -b/a << endl;
    }
}