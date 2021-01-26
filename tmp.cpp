#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.*/
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode *sum = new ListNode(0), *a = new ListNode(0, l1), *b = new ListNode(0, l2);
  int rem = 0;
  
  while (a->next != nullptr && b->next != nullptr) {
    a = a->next;
    b = b->next;
    
    sum = new ListNode(
      (a->val + b->val) % 10, 
      new ListNode(sum->val + (a->val + b->val)/10)
    );
  }
  
  return sum;
}

int main() {
  int a = 2, b = 9;
  cout << (a+b)/10 << "\n";
}