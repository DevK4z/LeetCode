#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minXorPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ref = 0;
        for (int j = 0; j < n; j++) ref ^= grid[0][j];
        for (int i = 1; i < m; i++) ref ^= grid[i][n - 1];
        auto mol = grid;
        int b[20] = {};
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                int val = grid[i][j + 1] ^ grid[i + 1][j];
                for (int k = 19; k >= 0; k--) {
                    if (!(val >> k & 1)) continue;
                    if (!b[k]) {
                        b[k] = val;
                        break;
                    }
                    val ^= b[k];
                }
            }
        }
        int res = ref;
        for (int k = 19; k >= 0; k--) {
            res = min(res, res ^ b[k]);
        }
        return res;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    cout << sol.minXorPath(grid) << '\n';
}