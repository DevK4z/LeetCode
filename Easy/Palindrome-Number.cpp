#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(n), space complexity: O(n)
    // String conversion approach
    bool isPalindrome(int x) {
        string s = to_string(x);
        string t = s;
        reverse(s.begin(), s.end());
        return s == t;
    }
};