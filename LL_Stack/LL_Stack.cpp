#include <bits/stdc++.h>

using namespace std;


// node class
class Node {
public:
   int data;
   Node* next;

   Node(int x) {
      data = x;
      next = NULL;
   }
};


class Stack {
   Node* top;
public:
   Stack(){
      top = NULL;
   }
   void push(int x){
      Node* temp = new Node(x);
      temp->next = top;
      top = temp;
   }
   void pop(){
      if (top == NULL)
         return;
      Node* temp = top;
      top = top->next;
      delete temp;
   }
   int peek(){
      return top->data;
   }
   bool empty(){
      return top == NULL;
   }
};

int main() {
   Stack S;
   S.push(1);
   S.pop();
   cout << S.empty() << endl;
   return 0;
}