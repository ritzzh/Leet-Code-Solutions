class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int x = mat.size();
        int sum = 0;
        for(int i = 0;i<x;i++)
        {
            sum += mat[i][i];
            if(i!=x-1-i)
            {
                sum += mat[i][x-1-i];
            }
            
        }
        return sum;
    }
};
