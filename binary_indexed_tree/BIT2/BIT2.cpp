#include <iostream>
#include <vector>

using namespace std;

const int MAXVAL = 1000000;

int get_sum(vector<int> &T, int a) {
  int sum = 0;
  while (a > 0) {
    sum += T[a];
    a -= a & -a;
  }
  return sum;
}

void update(vector<int> &T, int a, int val) {
  while (a < MAXVAL) {
    T[a] += val;
    a += a & -a;
  }
}

int main() {
  freopen("BIT2.INP", "r", stdin);
  freopen("BIT2.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAXVAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    cout << get_sum(T, a - 1) << "\n";
    update(T, a, a);
  }
}