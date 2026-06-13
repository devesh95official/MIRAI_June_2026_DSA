// reverse the queue

#include <bits/stdc++.h>

using namespace std;

int main() {

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    stack<int> ns;
    for (int i = 0; i < n; i++) {
        ns.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << ns.top() << endl;
        ns.pop();
    }
    return 0;
}