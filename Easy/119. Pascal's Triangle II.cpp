class Solution {
public:
    vector<int> getRow(int n) {
        int val = 34;
        vector<vector<int>> dp(val);
        for (int i = 0; i < val; i++) {
            for (int j = val - i - 1; j < val; j++) {
                dp[i].push_back(1);
            }
        }
        for (int i = 2; i < val; i++) {
            for (int j = 1; j < dp[i].size() - 1; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
        return dp[n];
    }
};
