// Stock Span Problem

#include <bits/stdc++.h>

using namespace std;

// O(n)

int main() {
   // input
   int n;
   cin >> n;
   vector<int> prices(n);
   for (int i = 0; i < n; i++) {
      cin >> prices[i];
   }
   // declared stack to store indices
   stack<int> s;

   for (int i = 0; i < n; i++) {
      // jabtak stack ke top pe chota element h abhi se tab tak nikalo
      while (!s.empty() && prices[i] >= prices[s.top()])s.pop();
      // agar stack khali h to i+1 verna i - s.top()
      if (s.empty())cout << i + 1 << " ";
      else cout << i - s.top() << " ";
      // current index ko dalna mat bhulna
      s.push(i);
   }

   return 0;
}