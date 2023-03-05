class Solution {
public:
    int findJudge(int n, vector<vector<int>> t) {
        if (t.size() == 0 && n == 1) return 1;
        map<int, int> mp;
        for (auto i : t) {
            mp[i[1]]++;
            mp[i[0]]--;
        }
        for (auto i : mp) {
            if (i.second == n - 1) return i.first;
        }
        return -1;
    }
};
