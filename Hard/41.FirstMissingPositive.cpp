class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) nums[i] = 0;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1] && nums[i] != 0)
                nums[i] = 0;
        }
        sort(nums.begin(), nums.end());
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                index = i;
                break;
            }
        }
        long long ans = 0;
        for (int i = index, val = 1; i < nums.size(); i++, val++) {
            if (nums[i] != val) {
                ans = val;
                break;
            }
        }
        if (ans == 0) ans = nums[nums.size() - 1] + 1;
        return ans;
    }
};
