#include <iostream>
#include <vector>

using namespace std;

const int MAX_VAL = 1000000;
const int MIN_VAL = -1000000;

int get_min(vector<int> &T, int a) {
  int min_val = MAX_VAL + 1;
  while (a > 0) {
    min_val = min(min_val, T[a]);
    a -= a & -a;
  }
  return min_val;
}

void update(vector<int> &T, int a, int val) {
  while (a <= MAX_VAL - MIN_VAL + 1) {
    T[a] = min(T[a], val);
    a += a & -a;
  }
}

void print_result(int res) {
  if (res == MAX_VAL + 1) {
    cout << "No solution\n";
  } else {
    cout << res << "\n";
  }
}

int main() {
  freopen("BIT11.INP", "r", stdin);
  freopen("BIT11.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAX_VAL - MIN_VAL + 2, MAX_VAL + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    int pos = MAX_VAL - a + 1;
    print_result(get_min(T, pos - 1));
    update(T, pos, a);
  }
}