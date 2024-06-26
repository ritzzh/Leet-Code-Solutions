class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size();
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]<target)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};

// optimal
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int ans=0;

        while(i<j)
        {
            if(nums[i]+nums[j]<target){
                ans += j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
