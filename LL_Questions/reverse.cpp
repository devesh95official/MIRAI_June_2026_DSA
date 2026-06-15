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

Node* reverse(Node* head){
   Node* prev = NULL;
   Node* curr = head;
   while (curr){
      Node* nextNode = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nextNode;
   }
   return prev;
}

int main() {



   return 0;
}