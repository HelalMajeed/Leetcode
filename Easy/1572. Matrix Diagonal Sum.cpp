class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int value;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j) {
                    sum += mat[i][j];
                }
            }
        }
        for (int i = 0; i < mat.size(); i++) {
            for (int  j = 0; j < mat.size(); j++) {
                if (i + j == mat.size() - 1) {
                    sum += mat[i][j];
                    if (i == j) {
                        value = mat[i][j];
                    }
                }
            }
        }
        if (mat.size() & 1 ^ 1) {
            return sum;
        } 
        return sum - value;
    }
};
