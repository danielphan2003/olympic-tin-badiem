#include <iostream>
#include <vector>

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
  while (a < MAXVAL) {
    ++T[a];
    a += a & -a;
  }
}

int main() {
  freopen("BIT1.INP", "r", stdin);
  freopen("BIT1.OUT", "w", stdout);

  int n, a;
  cin >> n;
  vector<int> T(MAXVAL + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a;
    cout << get_sum(T, a) << "\n";
    update(T, a);
  }

  // for (int i = 1; i <= MAXVAL + 1; ++i)
  //   cout << T[i] << "\n";

}