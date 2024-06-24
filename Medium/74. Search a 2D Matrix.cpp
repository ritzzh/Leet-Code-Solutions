class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int n = (row*col-1);
        int l = 0;
        int h = n;

        while(l<=h)
        {
            int mid = l+(h-l)/2;
            int r = mid/col;
            int c = mid%col;
            
            if(matrix[r][c]==target)
            {
                return true;
            }
            else if (matrix[r][c]<target)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return false;
    }
};
