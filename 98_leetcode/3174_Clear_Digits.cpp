#include "Solution.h"

string Solution::clearDigits(string s) {
    string ans = "";
    stack<char> st;
    for(auto c: s)
    {
        if (c >= 'a' && c <= 'z') {
            st.push(c);
        } else if (c >= '0' && c <= '9') {
            if (!st.empty()) st.pop();
        }
    }
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    return ans;
}
