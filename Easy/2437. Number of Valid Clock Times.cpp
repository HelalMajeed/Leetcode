class Solution {
public:
    int countTime(string t) {
        bool flag = false;
        for (auto i : t) 
            if (i == '?')
                flag = true;
        //if (!flag)
           // return 0;
        int ans = 1;
        if (t[4] == '?')
            ans *= 10;
        if (t[3] == '?')
            ans *= 6;
        if (t[0] == '?' && t[1] == '?')
            ans *= 24;
        if (t[0] == '?' && t[1] >= '4' && t[1] != '?')
            ans *= 2;
        if (t[0] == '?' && t[1] < '4' && t[1] != '?')
            ans *= 3;
        if (t[1] == '?' && t[0] < '2' && t[0] != '?')
            ans *= 10;
        if (t[1] == '?' && t[0] == '2' && t[0] != '?')
            ans *= 4;
        return ans;

    }
};
