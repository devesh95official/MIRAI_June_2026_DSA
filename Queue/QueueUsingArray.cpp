// queue using array
#include <bits/stdc++.h>

using namespace std;

class Queue {
    int arr[1000];
    int front = 0;
    int rear = -1;
public:
    // methods
    // enque
    void enque(int x) {
        rear++;
        arr[rear] = x;
    }
    // dequeue
    void dequeue() {
        if (front > rear)return;
        front++;
    }
    // aage
    int aage() {
        return arr[front];
    }
    // akhri
    int akhri() {
        return arr[rear];
    }
    // size
    int sz() {
        return rear - front + 1;
    }
    // isEmpty
    bool isEmpty() {
        return front > rear;
    }

};

int main() {

    Queue q;  // create a queue

    q.enque(10);
    q.enque(14);
    q.enque(18);
    q.enque(0); // enqueue operation

    q.dequeue(); // dequeue operation

    cout << "Size of queue : " << q.sz() << endl;
    cout << "Front of queue : " << q.aage() << endl;
    cout << "Rear of queue : " << q.akhri() << endl; // all O(1)

    // print all queue elements
    while (q.sz() > 0) {
        cout << q.aage() << " ";
        q.dequeue();
    }
    return 0;
}