class Solution {
    public int search(int[] nums, int target) {
        int beg, end, mid;
        beg = 0;
        end = nums.length-1;
        while(beg<=end)
        {
            mid = (beg+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(target<nums[mid])
            {
                end=mid-1;
            }
            if(target>nums[mid])
            {
                beg=mid+1;
            }
        }
        return -1;
    }
}
