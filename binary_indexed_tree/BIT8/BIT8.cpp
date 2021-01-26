#include <iostream>
#include <vector>

using namespace std;

const int MIN_VAL = -1000000;
const int MAX_VAL = 1000000;

int get_max(vector<int> &T, int a) {
  int max_val = MIN_VAL - 1;
  while (a > 0) {
    max_val = max(T[a], max_val);
    a -= a & -a;
  }
  return max_val;
}

void update(vector<int> &T, int a, int val) {
  while (a < MAX_VAL - MIN_VAL + 1) {
    T[a] = max(T[a], val);
    a += a & -a;
  }
}

void print_result(int res) {
  if (res == MIN_VAL - 1) {
    cout << "No solution\n";
  } else {
    cout << res << "\n";
  }
}

int main() {
  freopen("BIT8.INP", "r", stdin);
  freopen("BIT8.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAX_VAL - MIN_VAL + 1, MIN_VAL - 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    print_result(get_max(T, a + MAX_VAL + 1));
    update(T, a + MAX_VAL + 1, a);
  }
}