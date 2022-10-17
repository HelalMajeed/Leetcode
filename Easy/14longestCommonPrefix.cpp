class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string> ans(2);
        string str = strs[0];
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < strs.size(); j++) {
                if (str[i] != strs[j][i]) 
                    return ans[0];
            }
            ans[0].push_back(str[i]);
        }
        return ans[0];
    }
};
