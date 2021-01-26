#include <iostream>
#include <vector>

using namespace std;

const int MAX_VAL = 1000000;

int get_max(vector<int> &T, int a) {
  int max_val = 0;
  while (a > 0) {
    max_val = max(T[a], max_val);
    a -= a & -a;
  }
  return max_val;
}

void update(vector<int> &T, int a, int val) {
  while (a < MAX_VAL) {
    T[a] = max(T[a], val);
    a += a & -a;
  }
}

int main() {
  freopen("BIT7.INP", "r", stdin);
  freopen("BIT7.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAX_VAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    cout << get_max(T, a - 1) << "\n";
    update(T, a, a);
  }
}