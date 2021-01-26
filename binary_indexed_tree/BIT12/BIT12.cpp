#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_VAL = 1e9;
const int MAX_LABEL = 1e5;

int get_min(vector<int> &T, int a) {
  int min_val = MAX_VAL + 1;
  while (a > 0) {
    min_val = min(min_val, T[a]);
    a -= a & -a;
  }
  return min_val;
}

void update(vector<int> &T, int a, int val) {
  // cout << "Update " << a << "\n";
  while (a <= MAX_LABEL) {
    T[a] = min(T[a], val);
    // cout << "Min T[" << a << "] = " << T[a] << "\n";
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
  freopen("BIT12.INP", "r", stdin);
  freopen("BIT12.OUT", "w", stdout);

  int n;
  cin >> n;
  vector< pair<int, int> > a(n + 1), b(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> a[i].first;
    b[i] = make_pair(a[i].first, i);
  }

  sort(b.begin()+1, b.end());

  int prev_val = b[1].first - 1;
  int new_val = 0;
  for (int i = 1; i <= n; ++i) {
    if (b[i].first == prev_val) {
      a[b[i].second].second = new_val;
    } else {
      prev_val = b[i].first;
      a[b[i].second].second = ++ new_val;
    }
  }

  int max_val = new_val;
  vector<int> T(MAX_LABEL + 1, MAX_VAL + 1);
  for (int i = 1; i <= n; ++i) {
    a[i].second = max_val - a[i].second + 1;
    print_result(get_min(T, a[i].second - 1));
    update(T, a[i].second, a[i].first);
  }
}