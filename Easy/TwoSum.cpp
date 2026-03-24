#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    /*
    // Time complexity: O(n^2), space complexity: O(1)
    // Brute force approach
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) if (nums[i] + nums[j] == target) return {i, j};
        }
        return {};
    }
    */
    
    // Time complexity: O(n), space complexity: O(n)
    // Hash map approach
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int nd = target - nums[i];
            if (mp.count(nd)) return {mp[nd], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};