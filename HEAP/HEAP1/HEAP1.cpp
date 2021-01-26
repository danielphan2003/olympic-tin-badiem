#include <iostream>
#include <vector>

using namespace std;

void upheap(vector<int> &heap, int label) {
  int con = label, value = heap[label];
  while (con >= 2) {
    int cha = con / 2;
    if (heap[cha] < value) break;
    heap[con] = heap[cha];
    con = cha;
  }
  heap[con] = value;
}

void downheap(vector<int> &heap, int heapsize, int label) {
  int cha = label, value = heap[label];
  while (cha * 2 < heapsize) {
    int con = cha * 2;
    if (heap[con] > heap[con + 1]) ++con;
    if (heap[con] > value) break;
    heap[cha] = heap[con];
    cha = con;
  }
  heap[cha] = value;
}

void insert_heap(vector<int> &heap, int value, int label) {
  heap[label] = value;
  upheap(heap, label);
}

void remove_heap(vector<int> &heap, int &heapsize) {
  heap[1] = heap[heapsize];
  heap[heapsize] = 0;
  downheap(heap, --heapsize, 0);
}

int main() {
  freopen("HEAP1.INP", "r", stdin);
  freopen("HEAP1.OUT", "w", stdout);

  int T, N, node;
  cin >> T;
  for (int i = 0; i < T; ++i) {
    cin >> N;
    vector<int> heap(2*N+1, 0);
    for (int j = 1; j <= N; ++j) {
      cin >> node;
      insert_heap(heap, node, j);
    }

    // exit(0);

    int sum = 0, heapsize = N;
    for (int j = 1; j < N; ++j) {
      for (int k = 1; k <= 2; ++k) {
        sum += heap[1];
        remove_heap(heap, heapsize);
      }
      insert_heap(heap, sum, ++heapsize);
    }

    cout << sum << "\n";
  }
}