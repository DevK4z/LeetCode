#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(n*log(n) + m), space complexity: O(1), 4ms
    // Sorting approach
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        sort(strs.begin(), strs.end());
        string f = strs[0], l = strs.back();
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == l[i]) res += f[i];
            else break;
        }
        return res;
    } 
};