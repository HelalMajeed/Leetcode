class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 0;
        int neg = 0;
        for (auto i : nums) {
            if (i == 0) {
                sign++;
            }
            else if (i < 0) neg++;
        }
        if (sign) return 0;
        if (neg & 1) return -1;
        return 1;
    }
};
