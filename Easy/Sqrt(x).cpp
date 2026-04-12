#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(log(x))
    // Binary search approach
    int mySqrt(int x) {
        int l = 1, r = x;
        while (l <= r) {
            int m = l + (r - l) /2;
            if (m <= x / m) l = m + 1;
            else r = m - 1;
        }
        return r;
    }
};