#include <fstream>
using namespace std;

ifstream in;
ofstream out;

void process(int N) {
    string dv[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};

    int 
        hangTram = N/100,
        hangDv = N%10,
        hangChuc = (N/10)%10;

    if (hangTram != 0) {
        out << dv[hangTram] << " TRAM";
        if (hangChuc == 0) {
            if (hangDv != 0) 
                out << " LE " << dv[hangDv];
        }
        else if (hangDv == 0) {
            out << " " << dv[hangChuc] << " MUOI";
        }
        else 
            out << " " << dv[hangChuc] << " MUOI " << dv[hangDv];
    }
    else if (hangChuc != 0) {
        out << dv[hangChuc] << " MUOI";
        if (hangDv != 0) 
            out << " " << dv[hangDv];
    }
    else out << dv[hangDv];
}

int main()
{
    in.open("doc_bon_chu_so.inp");
    out.open("doc_bon_chu_so.out");
    
    int N;
    while (!in.eof()) {
        in >> N;
        out << N << ": ";
        process(N);
        out << endl;
    }

    in.close();
    out.close();
}
