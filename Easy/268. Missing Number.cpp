// using bit manipulation
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if((nums[i]^i)!=0)
            {
                return i;
            }
        }
        return n;
    }
};
