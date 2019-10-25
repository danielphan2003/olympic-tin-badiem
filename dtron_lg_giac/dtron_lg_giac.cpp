#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("dtron_lg_giac.inp");
    ofstream out;
    out.open("dtron_lg_giac.out");
    
    float N;
    while (!in.eof()) {
        in >> N;
        int dem = 0, t;
        for (int i = 0; i < 360; i += 90) {
            dem++;
            if ((N >= i) && (N < i + 90)) {
                t = dem;
            }
        }

        out << N << " : " << t << endl;
    }

    in.close();
    out.close();
}