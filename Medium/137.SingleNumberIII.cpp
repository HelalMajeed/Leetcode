class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int x = count(nums.begin(), nums.end(), nums[i]);
            if (x == 1)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};
