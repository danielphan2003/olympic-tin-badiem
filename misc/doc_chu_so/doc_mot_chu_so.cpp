#include <fstream>
using namespace std;

ifstream in;
ofstream out;

int main()
{
    in.open("doc_mot_chu_so.inp");
    out.open("doc_mot_chu_so.out");

    int N;
    string s[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};

    while (!in.eof()) {
        in >> N;
        out << N << ": " << s[N] << endl;
    }

    in.close();
    out.close();
}