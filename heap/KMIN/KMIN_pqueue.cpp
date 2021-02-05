#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n, k;
  cin >> m >> n >> k;
  
  priority_queue< int, vector<int>, greater<int> > a, b;
  for (int i = 0; i < m; ++i) {
    int value;
    cin >> value;
    a.push(value);
  }
  for (int i = 0; i < n; ++i) {
    int value;
    cin >> value;
    b.push(value);
  }

  vector<int> ans;
  
}