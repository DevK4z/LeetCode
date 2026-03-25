#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(max(n, m))
    // Simulation approach
    string addBinary(string a, string b) {
        string res = "";
        make_pair(a, b);
        int carry = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry; i--, j--) {
            carry += (i >= 0 ? a[i] - '0' : 0) + (j >= 0 ? b[j] - '0' : 0);
            res += (carry % 2) + '0';
            carry /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};