class Solution {
public:
int check(int i, vector<int>&nums, int sum, vector<vector<int>>&dp)
    {     
        if(i==0){
            return nums[i]==sum;
        }
        if(sum<0){
            return 0;
        }
        if(sum==0){
            return 1;
        }
        if(dp[i][sum]!=-1)
        {
            return dp[i][sum];
        }
        int take = false;
        if(nums[i]<sum) take = check(i-1,nums,sum-nums[i],dp);
        int nottake = check(i-1,nums,sum-0,dp);

        return dp[i][sum] = take || nottake;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return 0;
        
        int target = sum/2;
        vector<vector<int>> dp(nums.size(), vector<int>(target+1,-1));
        int ans = check (nums.size()-1,nums,target,dp);
        return ans;
    }
    
};
