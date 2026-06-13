// Stock Span Problem GFG

#include <bits/stdc++.h>

using namespace std;

// O(n)

vector<int> calculateSpan(vector<int>& arr) {
   // declared stack to store indices
   stack<int> s;
   vector<int> ans;
   for (int i = 0; i < arr.size(); i++) {
      // jabtak stack ke top pe chota element h abhi se, tab tak nikalo
      while (!s.empty() && arr[i] >= arr[s.top()])s.pop();
      // agar stack khali h to i+1 verna i - s.top()
      if (s.empty())ans.push_back(i + 1);
      else ans.push_back(i - s.top());
      // current index ko dalna mat bhulna
      s.push(i);
   }
   return ans;
}


int main() {
   return 0;
}