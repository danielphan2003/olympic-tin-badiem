#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_VAL = 100000;

int get_sum(vector<int> &T, int a) {
  int sum = 0;
  while (a > 0) {
    sum += T[a];
    a -= a & -a;
  }
  return sum;
}

void update(vector<int> &T, int a, int val) {
  while (a < MAX_VAL) {
    T[a] += val;
    a += a & -a;
  }
}

int main() {
  freopen("BIT6.INP", "r", stdin);
  freopen("BIT6.OUT", "w", stdout);
  int n;
  cin >> n;
  vector<int> A(n + 1, 0), A_old(n + 1, 0);
  vector< pair<int, int> > B(n + 1);

  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
    A_old[i] = A[i];
    B[i] = make_pair(A[i], i);
  }
  
  sort(B.begin() + 1, B.end());

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

  vector<int> T(MAX_VAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cout << get_sum(T, A[i] - 1) << "\n";
    update(T, A[i], A_old[i]);
  }
}