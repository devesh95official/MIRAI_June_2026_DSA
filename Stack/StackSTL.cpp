#include <bits/stdc++.h>

using namespace std;

// Stack STL

int main() {

    stack<int> st;  // create a stack

    st.push(10);
    st.push(14);
    st.push(18);
    st.push(0); // push operation

    st.pop(); // pop operation

    cout << "Size of stack : " << st.size() << endl;
    cout << "Top of stack : " << st.top() << endl; // O(1)

    // print all stack elements
    while (st.size() > 0) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}