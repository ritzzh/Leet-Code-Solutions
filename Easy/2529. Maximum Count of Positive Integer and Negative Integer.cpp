class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int lowb = 0, highb = nums.size()-1, a1 =0, a2 =0;

        while(lowb<=highb)
        {
            int mid = (lowb+highb)/2;
            if(nums[mid]<0)
            {
                a1 = mid+1;
                lowb = mid+1;
            }
            else
            {
                highb = mid-1;
            }
        }

        lowb = 0, highb = nums.size()-1;
        while(lowb<=highb)
        {
            int mid = (lowb+highb)/2;
            if(nums[mid]>0)
            {
                highb = mid-1;
                a2 = nums.size()-mid;
            }
            else
            {
                lowb = mid+1;
            }    
        }
        return max(a1,a2);
    }
};
