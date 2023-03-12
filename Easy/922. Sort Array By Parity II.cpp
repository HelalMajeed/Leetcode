class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<int> even;
        priority_queue<int> odd;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & 1) odd.push(nums[i]);
            else even.push(nums[i]);
        }
        n /= 2;
        while (n--) {
            ans.push_back(even.top());
            ans.push_back(odd.top());
            even.pop();
            odd.pop();
        }
        return ans;
    }
};
