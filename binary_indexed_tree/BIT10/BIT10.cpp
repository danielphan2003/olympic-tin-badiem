#include <iostream>
#include <vector>

using namespace std;

const int MAX_VAL = 1000000;

int get_min(vector<int> &T, int a) {
  int min_val = MAX_VAL + 1;
  while (a > 0) {
    min_val = min(T[a], min_val);
    a -= a & -a;
  }
  
  return min_val;
}

void update(vector<int> &T, int a, int val) {
  // cout << "Update " << a << "\n";
  while (a < MAX_VAL * 2 + 1) {
    T[a] = min(T[a], val);
    // cout << "Min T[" << a << "] = " << T[a] << "\n";
    a += a & -a;
  }
}

int main() {
  freopen("BIT10.INP", "r", stdin);
  freopen("BIT10.OUT", "w", stdout);

  int n, a, pos;
  cin >> n;
  vector<int> T(MAX_VAL * 2 + 1, MAX_VAL + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    pos = MAX_VAL - a + 1;
    int res = get_min(T, pos -1);
    if (res > MAX_VAL) {
      res = 0;
    }
    cout << res << "\n";
    update(T, pos, a);
  }
}