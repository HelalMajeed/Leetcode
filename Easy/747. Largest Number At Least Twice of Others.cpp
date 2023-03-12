class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_int = 0;
        int sec_max = 0;
        int indx_mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (max_int < nums[i]) {
                max_int = nums[i];
                indx_mx = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (sec_max < nums[i] && nums[i] != max_int) {
                sec_max = nums[i];
            }
        }
        return (max_int >= 2 * sec_max ? indx_mx : -1);
    }
};
