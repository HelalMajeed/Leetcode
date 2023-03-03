class Solution {
public:
    int strStr(string a, string b) {
        int x = a.length();
        int y = b.length();
        if (a == b) return 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                if (a.substr(i, j) == b)
                    return i;
            }
        }
        return -1;
    }
};
