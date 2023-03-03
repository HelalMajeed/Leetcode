class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if (n % 4 != 0 || n < 1) return 0;
        return isPowerOfFour(n / 4);
    }
};
