#include <bits/stdc++.h>

using namespace std;

// linked list intro

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

int main() {
    // creaed a single Node
    Node* aj = new Node(10);
    cout << aj << endl;

    cout << "DATA in AJ Node : " << aj -> data << endl;
    cout << "Address of Next Node in AJ Node : " << aj -> next << endl;

    return 0;
}