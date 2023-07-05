class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> l;
        int count = 0;
        for(int i=0;i<nums.size(); i++)
        {
            count+=nums[i];
            if((nums[i]==0 & count!=0) | (i==nums.size()-1))
            {
                l.push_back(count);
                count=0;
            }
            else if(nums[i]==0 & count==0)
            {
                l.push_back(0);
            } 
        }

        int mx = 0;
        int sum = 0;
        if(l.size()==0)
        {
            return 0;
        }
        if(l.size()==1)
        {
            return l[0]-1;
        }
        for(int i=0;i <l.size()-1;i++)
        {
            sum = l[i]+l[i+1];
            mx = max(mx,sum);
            cout<<l[i]<<" ";
        }
        return mx; 
    }
};
