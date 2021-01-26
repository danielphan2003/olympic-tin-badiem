#include <iostream>
#include <vector>

using namespace std;

const int MAXVAL = 1000000;
const int MINVAL = -1000000;

int get_sum(vector<int> &T, int a) {
  int sum = 0;
  while (a > 0) {
    sum += T[a];
    a -= a & -a;
  }
  return sum;
}

void update(vector<int> &T, int a) {
  while (a < MAXVAL - MINVAL + 1) {
    ++T[a];
    a += a & -a;
  }
}

int main() {
  freopen("BIT3.INP", "r", stdin);
  freopen("BIT3.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAXVAL - MINVAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    cout << get_sum(T, a + MAXVAL - 2) << "\n";
    update(T, a + MAXVAL + 1);
  }
}




// label - a[i]



// Domain(a[i])    = (-10^6 .. 10^6) --> 10^6--10^6   + 1 = 2*10^6 + 1
// Domain(T-label) = (-10^6 .. 10^6) --> 
 
                   
// Domain(T-label) = (1     .. 2*10^6 + 1) 2*10^6+1-1 + 1 = 2*10^6 + 1


