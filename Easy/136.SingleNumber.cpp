class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        int ans = 1e9;
        if (nums[0] != nums[1]) return nums[0];
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
                ans = nums[i];
        }
        if (ans == 1e9) ans = nums[nums.size() - 1];
        return ans;
    }
};
