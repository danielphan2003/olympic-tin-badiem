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

void update(vector<int> &T, int a, int val) {
  while (a < MAXVAL - MINVAL + 1) {
    T[a] += val;
    a += a & -a;
  }
}

int main() {
  freopen("BIT4.INP", "r", stdin);
  freopen("BIT4.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAXVAL - MINVAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    cout << get_sum(T, a + MAXVAL) << "\n";
    update(T, a + MAXVAL + 1, a);
  }
}