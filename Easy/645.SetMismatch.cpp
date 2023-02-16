class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto i : mp) {
            if (i.second == 2) {
                ans.push_back(i.first);
            }
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                nums[i] = 0;
        }
        sort(nums.begin(), nums.end());
        bool flag = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != (i)) {
                ans.push_back(i);
                flag = false;
                break;
            }
        }
        if (flag) ans.push_back(nums[nums.size() - 1] + 1);
        return ans;
    }
};
