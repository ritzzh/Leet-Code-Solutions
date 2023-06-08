/* brute force
- can be done using binary search
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int cl = grid[0].size(); //columns
        int rl = grid.size(); //rows

        for( int i=cl-1; i>=0 ;i--) // for columns
        {
            for(int j = rl-1; j>=0; j--) // for rows
            {
                if(grid[j][i]<0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        return count;
    }
};
