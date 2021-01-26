#include <iostream>
#include <vector>

using namespace std;

void upheap(vector<int> &heap, int label) {
  int con = label, value = heap[label];
  while (con >= 2) {
    int cha = con / 2;
    if (heap[cha] > value) break;
    heap[con] = heap[cha];
    con = cha; 
  }
  heap[con] = value;
}

void downheap(vector<int> &heap, int heapsize, int label) {
  int cha = label, value = heap[label];
  while (cha * 2 <= heapsize) {
    int con = cha * 2;
    if (heap[con] < heap[con+1]) ++ con;
    if (heap[con] < value) break;
    heap[cha] = heap[con];
    cha = con;
  }
  heap[cha] = value;
}

int main() {
  freopen("ex1.inp", "r", stdin);
  freopen("ex1.out", "w", stdout);
  
  int n;
  cin >> n;
  vector<int> heap(n+1, 0);
  // heap.reserve(n*2 + 2);
  for (int i = 1; i <= n; ++i) {
    int node;
    cin >> node;
    heap[i] = node;
    upheap(heap, i);
  }

  
  // exit(0);
  
  int query, option, payload;
  cin >> query;
  for (int i = 0; i < query; ++i) {
    cin >> option;
    if (option == 0) {
      swap(heap[1], heap[n]);
      heap[n] = 0;
      downheap(heap, --n, 1);
    } else if (option == 1) {
      cin >> payload;
      heap[++n] = payload;
      upheap(heap, n);
    } else if (option == 2) {
      cout << heap[1] << "\n";
    }
  }
}