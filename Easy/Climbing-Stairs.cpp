#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(n)
    // Dynamic programming approach
    int climbStairs(int n) {
        int res = 0;
        if (n == 1) res = 1;
        else if (n == 2) res = 2;
        else {
            int a = 1, b = 2;
            for (int i = 3; i <= n; i++) res = a + b, a = b, b = res;
        }
        return res;
    }
};