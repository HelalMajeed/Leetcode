class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        //if (s == d) return true;

        vector<vector<int>> g(n, vector<int> ());
        for (int i = 0; i < e.size(); i++) {
            g[e[i][0]].push_back(e[i][1]);
            g[e[i][1]].push_back(e[i][0]);
        }

        vector<bool> vis(n, false);
        stack<int> st;
        st.push(s);
        while (!st.empty()) {
            int t = (int) st.top();
            if (t == d) return true;
            vis[t] = true;
            st.pop();
            for (int i = 0; i < (int) g[t].size(); i++) {
                if (!vis[g[t][i]]) {
                    st.push(g[t][i]);
                }
            }
        }
        return false;
    }
};
