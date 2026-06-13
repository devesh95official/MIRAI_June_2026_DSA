// reverse the stack

#include <bits/stdc++.h>

using namespace std;

int main() {

    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }
    stack<int> ns;
    for (int i = 0; i < n; i++) {
        ns.push(s.top());
        s.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << ns.top() << endl;
        ns.pop();
    }
    return 0;
}