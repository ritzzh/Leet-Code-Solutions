// Failed Memoization (passes 60 cases)

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        int maxsum = INT_MAX;
        int sum = 0;
        rec(grid,0,0,m,n,sum,maxsum,dp);
        return maxsum;
    }
    void rec(vector<vector<int>>& grid, int i,int j,int m,int n,int sum,int &maxsum, vector<vector<int>> &dp)
    {
        if(i>=m || j>=n){
            return;
        }
        sum += grid[i][j];

        if(dp[i][j]!=0){
            if(sum>dp[i][j])return;
        }
        dp[i][j] = sum;
        if(i==m-1 && j==n-1)
        {
            maxsum = min(sum,maxsum);
            return;
        }
        rec(grid,i,j+1,m,n,sum,maxsum,dp);
        rec(grid,i+1,j,m,n,sum,maxsum,dp);
    }

};

//Optimized Tabulation

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=1;i<n;i++){
            grid[0][i] += grid[0][i-1];
        }
        for(int i=1;i<m;i++){
            grid[i][0] += grid[i-1][0];
        }

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                grid[i][j] += min(grid[i][j-1],grid[i-1][j]);
            }
        }
        return grid[m-1][n-1];
    }
};
