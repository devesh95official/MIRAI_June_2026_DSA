// Dynamic Queue Using Linked List

#include <bits/stdc++.h>

using namespace std;

class Node {
public:
   int data;
   Node* next;
   Node(int x) {
      data = x;
      next = NULL;
   }
};

class Queue {
public:
   Node* front;
   Node* rear;
   int sz;
   Queue() {
      front = NULL;
      rear = NULL;
      sz = 0;
   }
   void enqueue(int x) {
      Node* newNode = new Node(x);
      sz++;
      if (rear == NULL) {
         front = newNode;
         rear = newNode;
         return;
      }

      rear -> next = newNode;
      rear = newNode;
   }
   void dequeue() {
      if (front == NULL) {
         cout << "Queue UnderFlow\n";
         return;
      }
      sz--;
      Node* temp = front;
      front = front -> next;
      delete temp;
      if (front == NULL)rear = NULL;
   }
   int getFront() {
      if (front != NULL) {
         return front -> data;
      }
      return -1;
   }
   bool isEmpty(){
      if(front == NULL)return true;
      return false;
   }
   int Length() {
      return sz;
   }
   void Display() {
      Node* temp = front;
      while (temp != NULL) {
         cout << temp -> data << " ";
         temp = temp -> next;
      }
      cout << endl;
   }
};

int main() {

   Queue Q;
   // insert elements
   Q.enqueue(10);
   Q.enqueue(20);
   Q.enqueue(30);
   // delete elements
   Q.dequeue();
   //Display
   Q.Display();
   // length
   cout << "Length of Queue : ";
   cout << Q.Length() << endl;
   cout << "Front Value : " << Q.getFront() << endl;
   return 0;
}