class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return dop(n,dp);
    }
    int dop(int n, vector<int> &dp)
    {
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int result = dop(n-1,dp) + dop(n-2,dp);
        dp[n] = result;
        return result;
    }
};
