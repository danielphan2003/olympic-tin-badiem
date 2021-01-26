#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MIN_VAL = -1000000000;
const int MAX_VAL = 100000;

int get_max(vector<int> &T, int a) {
  int max_val = MIN_VAL - 1;
  while (a > 0) {
    max_val = max(T[a], max_val);
    a -= a & -a;
  }
  return max_val;
}

void update(vector<int> &T, int a, int val) {
  while (a < MAX_VAL + 1) {
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
  freopen("BIT9.INP", "r", stdin);
  freopen("BIT9.OUT", "w", stdout);

  int n;
  cin >> n;
  vector<int> A(n + 1, 0), A_old(n + 1, 0);
  vector<pair<int, int> > B(n + 1);
  
  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
    A_old[i] = A[i];
    B[i] = make_pair(A[i], i);
  }

  sort(B.begin()+1, B.end());

  int prev_val = B[1].first - 1;
  int new_val = 0;
  for (int i = 1; i <= n; ++i) {
    if (B[i].first > prev_val) {
      prev_val = B[i].first;
      A[B[i].second] = ++ new_val;
    } else {
      A[B[i].second] = new_val;
    }
  }

  vector<int> T(MAX_VAL + 1, MIN_VAL - 1);
  for (int i = 1; i <= n; ++i) {
    print_result(get_max(T, A[i] - 1));
    update(T, A[i], A_old[i]);
  }
}