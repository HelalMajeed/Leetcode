class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (nums[i] & 1 && nums[j] & 1 ^ 1) {
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};
