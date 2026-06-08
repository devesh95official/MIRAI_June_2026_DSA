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
    // create linked list manually
    Node* head;

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);

    head = first;
    head -> next = second;
    head -> next -> next = third;
    head -> next -> next -> next = forth;
    head -> next -> next -> next -> next = fifth;

    // treverse
    Node* temp = head;
    while (temp != NULL) {
        cout << temp-> data << " ";
        temp = temp -> next;
    }

    return 0;
}