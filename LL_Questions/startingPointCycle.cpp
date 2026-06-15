#include <bits/stdc++.h>

using namespace std;

class Node{
public:
   int data;
   Node* next;
   Node(int x){
      data = x;
      next = NULL;
   }
};

Node* detectCycle(Node* head) {
   Node* slow = head;
   Node* fast = head;
   while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
         slow = head;
         while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
         }
         return slow;
      }
   }
   return NULL;
}

int main() {



   return 0;
}