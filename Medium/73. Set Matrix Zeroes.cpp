//My solution 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][j] = -12345678;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == -12345678) {
                    int x = 0;
                    matrix[i][j] = 0;
                    while (x < matrix[0].size()) {
                        if (matrix[i][x] != -12345678)
                            matrix[i][x] = 0;
                        x++;
                    }
                    x = 0;
                    while (x < matrix.size()) {
                        if (matrix[x][j] != -12345678)
                            matrix[x][j] = 0;
                        x++;
                    }
                }
            }
        }
    }
};
