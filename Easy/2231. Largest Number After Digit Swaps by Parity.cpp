class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (s[i] < s[j] && (s[i] & 1 ^ 1 && s[j] & 1 ^ 1)) {
                    swap(s[i], s[j]);
                }
                if (s[i] < s[j] && (s[i] & 1 && s[j] & 1)) {
                    swap(s[i], s[j]);
                }
            }
        }
        int ans = stoi(s);
        return ans;
    }
};
