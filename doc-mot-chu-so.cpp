#include <fstream>
using namespace std;

ifstream in;
ofstream out;

int main()
{
    in.open("input/doc-mot-chu-so.inp");
    out.open("output/doc-mot-chu-so.out");

    int N;
    string s[] = {"KHONG", "MOT", "HAI", "BA", "BON", "NAM", "SAU", "BAY", "TAM", "CHIN"};

    while (!in.eof()) {
        in >> N;
        out << N << ": " << s[N] << endl;
    }

    in.close();
    out.close();
}