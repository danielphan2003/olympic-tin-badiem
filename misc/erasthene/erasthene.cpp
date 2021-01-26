/*
int not_prime[1000];

for (int i: 1 .. 1000) {
    not_prime[i] = 0;
}
for (int i = 2; i <=1000; ++i) {
    if (not_prime[i] == 0) {
        i la ngto;
        for (int j = i+1; j <=1000; j+=i) {
            not_prime[j] = i
        }
    }
}
*/
#include <fstream>
#include <math.h>

using namespace std;

ifstream in;
ofstream out;
int n, count = 0, dem = 1;
bool prime[100];

bool isPrime(int t) {
    if (t == 2)
        return prime[t] = true;
    for (int i = 2; i <= round(sqrt(t)); i++) 
        if (t % i == 0)
            return false;
    return prime[t] = true;
}

void spread() {
    int i = dem, j = 1;
    prime[dem] = true;
    while (i < n) {
        j++;
        i *= j;
        prime[i] = false;
    }
}

void countAndSpread() {
    count++;
    out << dem << ' ';
    spread();
}

void erasthene() {
    while (count < n) {
        dem++;
        if (prime[dem]) 
            countAndSpread();
        else
            if (isPrime(dem)) 
                countAndSpread();
    }

}

int main() {
    in.open("erasthene.inp");
    out.open("erasthene.out");
    
    in >> n;
    for (int i = 0; i <= n; i++)
        prime[i] = false;
    erasthene();
}