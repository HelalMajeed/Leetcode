class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int cnt = 0;
        for (auto i : nums) {
            if (i) cnt++;
            else cnt = 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};
