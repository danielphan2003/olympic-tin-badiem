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
  return 0;
}