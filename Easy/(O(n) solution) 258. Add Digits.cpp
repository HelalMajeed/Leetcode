class Solution {
public:
    int addDigits(int n) {
        if (!n) return n;
        while (n >= 10) {
            n -= 9;
        }
        return n;
    }
};
