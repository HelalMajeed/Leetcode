class Solution {
public:
    int addDigits(int n) {
        if (!n) return n;
        return (!(n % 9) ? 9 : n % 9);
    }
};
