#include <fstream>
#include <algorithm>

using namespace std;

int main() 
{
    ifstream in("sort_1.inp");
    ofstream out("sort_1.out");

    int n, a[1000000], k;
    in >> n >> k;
    for (int i = 0; i < n; i++) 
    {
        in >> a[i];
    }
    
    sort(a, a+n);
    out << a[k];
    return 0;
}