#include <fstream>
using namespace std;

int main()
{
    ifstream in("pt-bac-nhat.inp");
    ofstream out("pt-bac-nhat.out");

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