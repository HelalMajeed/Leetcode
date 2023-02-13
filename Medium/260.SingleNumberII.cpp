class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = count(nums.begin(), nums.end(), nums[i]);
            if (x == 1) ans = nums[i];
        }
        return ans;
    }
};
