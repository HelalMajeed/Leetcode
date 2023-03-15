class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> dp(n);
        for (int i = 0; i < n; i++) {
            for (int j = n - i - 1; j < n; j++) {
                dp[i].push_back(1);
            }
        }
        for (int i = 2; i < n; i++) {
            for (int j = 1; j < dp[i].size() - 1; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
        return dp;
    }
};
