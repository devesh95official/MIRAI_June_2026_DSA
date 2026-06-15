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

Node* nthFromEnd(Node* head, int n) {
    Node* first = head;
    Node* second = head;
    for (int i = 0; i < n; i++)first = first->next;
    while (first) {
        first = first->next;
        second = second->next;
    }
    return second;
}


int main() {



    return 0;
}