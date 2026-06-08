// Array implementation of Stack

#include <bits/stdc++.h>

using namespace std;

class Stack {
private:
   int arr[1000];
   int top = -1;
public:
// methods
// push
   void push(int x) {
      top++;
      arr[top] = x;
   }
// pop
   void pop() {
      if(top!=-1)top--;
   }
// size
   int sz() {
      return top + 1;
   }
// top
   int Top() {
      return arr[top];
   }
// isEmpty
   bool isEmpty() {
      if (top == -1)return true;
      return false;
   }
// isFull
   bool isFull() {
      if (top == 999)return true;
      return false;
   }
};

int main() {

   Stack S;

   int n;
   cin >> n;
   for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      S.push(a);
   }

   cout << "size of stack : " << S.sz() << endl;
   cout << "Top element : " << S.Top() << endl;

   while (!S.isEmpty()) {
      cout << S.Top() << endl;
      S.pop();
   }

   return 0;
}