#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // time complexity: O(n)
    int longestPalindrome(string s) {
        unordered_set <char> st;
        int res= 0;
        for (char c : s) {
            if (st.count(c)) st.erase(c), res += 2;
            else st.insert(c);
        }
        return st.empty() ? res : res + 1;
    }
};