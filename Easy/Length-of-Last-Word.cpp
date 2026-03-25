#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        stringstream ss(s);
        string w;
        while (ss >> w) res = w.size();
        return res;
    }
};