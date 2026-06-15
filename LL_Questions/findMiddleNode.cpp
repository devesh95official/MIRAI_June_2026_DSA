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

Node* middleNode(Node* head){
   Node* slow = head;
   Node* fast = head;
   while (fast && fast->next){
      slow = slow->next;
      fast = fast->next->next;
   }
   return slow;
}


int main() {



   return 0;
}