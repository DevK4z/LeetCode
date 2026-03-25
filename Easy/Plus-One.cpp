#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(n);
    // String conversion approach
    vector<int> plusOne(vector<int>& digits) {
        string s = "";
        for (int d : digits) s += to_string(d);
        int n = s.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] < '9') {
                s[i]++;
                break;
            } else s[i] = '0';
        }
        if (s[0] == '0') s = '1' + s;
        vector <int> res;
        for (char c : s) res.push_back(c - '0');
        return res;
    }
};