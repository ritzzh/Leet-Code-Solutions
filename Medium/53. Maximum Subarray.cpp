class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,max=0,maxi=nums[0];
        vector <int> res;
        int x =nums.size();
        for(int i=0; i < x;i++)
        {
            sum=sum+nums[i];
            if(sum<0)
            {
                sum=0;
            }
            if(sum>max)
            {
                max=sum;
            }
            if(nums[i]>maxi)
            {
                maxi=nums[i];
            }
        }
        if(max==0)
        {
            return maxi;
        }
        return max;
    }
};
