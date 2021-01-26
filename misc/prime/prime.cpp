#include <fstream>
#include <math.h>

using namespace std;

int n;
bool a[100010];

void erasthene(int t) {
    int i = 0;
    while (t < n) {
        i++;
        t *= i;
        a[t*i] = false;
    }
}

bool isPrime(int t) {
    if (t == 0 || t == 1) 
        return 0;
    if (t == 2)
        return 1;
    for (int i = 1; i <= round(sqrt(t)); i++) {
        if (t % i == 0)
            return 0;
    }
    return 1;
} 

int main() {
    ifstream in;
    ofstream out;
    in.open("prime.inp");
    out.open("prime.out");

    in >> n;
    for (int i = 0; i < n; i++) {
        if (isPrime(i)) {
            a[i] = true;
            erasthene(i);
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            out << i;
        }
    }
    in.close();
    out.close();
}