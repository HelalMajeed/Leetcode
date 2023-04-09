class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if (n == 1 || numRows == 1) return s;
        vector<string> c(numRows);
        bool down = true;
        for (int letters = 0, rows = 0; letters < n; letters++) {
            c[rows].push_back(s[letters]);
            if (down) {
                rows++;
            } else if (!down){
                rows--;
            }
            if (rows == numRows - 1) down = false;
            else if (rows == 0)  down = true;
        }
        string ans = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < c[i].length(); j++) {
                ans += c[i][j];
            }
        }
        return ans;
    }
};
