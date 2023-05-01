class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        for (auto i : salary) {
            sum += i;
        }
        sort(salary.begin(), salary.end());
        sum -= salary.front();
        sum -= salary.back();
        return sum / (salary.size() - 2);
    }
};
