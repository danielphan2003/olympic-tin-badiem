#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXVAL = 100000;

int get_sum(vector<int> &T, int a) {
  int sum = 0;
  while (a > 0) {
    sum += T[a];
    a -= a & -a;
  }
  return sum;
}

void update(vector<int> &T, int a) {
  // cout << "Update a = " << a << "\n";
  while (a < MAXVAL) {
    ++T[a];
    // cout << "T[" << a << "] = " << T[a] << "\n";
    a += a & -a;
  }
}

bool compare(pair<int,int> a, pair<int,int> b) {
  return a.first < b.first;
}

int main() {
  freopen("BIT5.INP", "r", stdin);
  freopen("BIT5.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> A(n + 1, 0);
  vector<pair<int, int> > B(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> A[i];
    B[i] = make_pair(A[i], i);
  }

  sort(B.begin() + 1, B.end());

  // 8
  // -10 -10 -8 -8 2 2 5 5 6 7
  // sort: 
  //   -10 -10 -8 -8 2 2 5 5 6 7
  // new_val = 0;
  //   1   1   2  2  3 3 4 4 5 6
  // new_val = 6

  int prev_val = B[1].first - 1;
  int new_val = 0;
  for (int i = 1; i <= n; i++) {
    if (B[i].first > prev_val) {
      prev_val = B[i].first;
      A[B[i].second] = ++ new_val;  
    }
    else { // if (B[i].first == prev_val) {
      A[B[i].second] = new_val;
    }
  }  

  vector<int> T(MAXVAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cout << get_sum(T, A[i] - 1) << "\n";
    update(T, A[i]);
  } 
}