class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int num[10000];
        int cnt = 0;
        int n = x;
        long long m = 0;
        while (n > 0) {
            int r = n % 10; 
            num[cnt++] = r;
            n /= 10;
        }
        for (int i = 0; i < cnt; i++) {
            m = m * 10 + num[i];
        }
        if (x == m)
            return true;
        else
            return false;
    }
};
