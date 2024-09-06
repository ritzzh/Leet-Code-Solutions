class Solution {
    public int removeDuplicates(int[] nums) { 
        int j = 1;
        int last = nums[0];
        for(int i=1; i<nums.length; i++){
           if(nums[i]!=last){
                nums[j]=nums[i];
                last=nums[i];
                j++;
           }
        }
        return j;
    }
}
