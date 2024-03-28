class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> a;
        int l = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
            if(a[nums[i]]>k)
            {
                while(nums[l]!=nums[i])
                {
                    a[nums[l]]--;
                    l++;
                }
                a[nums[l]]--;
                l++;
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};
