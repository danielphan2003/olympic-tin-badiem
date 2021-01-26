#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_VAL = 6e4;

int get_inv(vector<int> &T, int label) {
  int res = 0;
  while (label > 0) {
    res += T[label];
    label -= label & -label;
  }
  return res;
}

void update(vector<int> &T, int label, int val) {
  cout << "Update " << label << "\n";
  while (label <= MAX_VAL * 2) {
    ++T[label];
    cout << "T[" << label << "] = " << T[label] << "\n";
    label += label & -label;
  }
}

int main() {
  freopen("NKINV.INP", "r", stdin);
  freopen("NKINV.OUT", "w", stdout);

  int n, a, res = 0;
  cin >> n;
  vector<int> T(MAX_VAL * 2 + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    res += get_inv(T, MAX_VAL - i + 2);
    update(T, MAX_VAL + i, a);
  } 

  // cout << a <<"\n"';
  cout << res;
  // cout << get_inv(T, MAX_VAL - max_label + 1);
}