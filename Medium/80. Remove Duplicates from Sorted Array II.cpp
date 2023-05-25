// can be optimized

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int secRep = 0;
        int lost = 0;
        int current = 0;
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]^nums[i-1])==0)
            {
                secRep++;
                current = nums[i];
            }
            else if(nums[i]!=current)
            {
                secRep=0;
            }
            if(secRep>1)
            {
                nums[i]=INT_MAX;
                lost++;
            }
        }
        sort(nums.begin(),nums.end());
        return (nums.size()-lost);
    }
};
