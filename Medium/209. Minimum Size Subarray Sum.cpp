//Can be optimized, self implementation of sliding window

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int count = 0;
        int size = nums.size();

        int fcount = size+1;
        int bidx = 0;

        for(int i=0 ; i<size; i++)
        {
            sum+=nums[i];
            count++;
            while(sum>target)
            {
                fcount = min(count,fcount);
                sum-=nums[bidx];
                count--;
                bidx++;
            }
            if(sum==target)
            {
                fcount = min(count,fcount);
            }
        }
        if(fcount!=size+1)
        {
            return fcount;
        }
        return 0;
    }
};
