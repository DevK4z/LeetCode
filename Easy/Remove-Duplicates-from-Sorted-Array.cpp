#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Time complexity: O(n)
    // Two pointers approach
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int idx = 1;
        for (int i = 1; i < nums.size(); i++) if (nums[i] != nums[idx - 1]) nums[idx++] = nums[i];
        return idx;
    }
};