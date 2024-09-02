class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> hash_set = new HashSet<Integer>();
        Arrays.sort(nums);
        for(int i: nums)
        {
            hash_set.add(i);
        }
        int maxCount = 0;
        for(int i=0;i<nums.length;i++)
        {
            int count = 1;
            int temp = nums[i];
            if(!hash_set.contains(temp-1))
            {
                while(hash_set.contains(temp+1))
                {
                    count++;
                    temp++;
                }
            }
            maxCount = Math.max(maxCount,count);
        }
        return maxCount;
    }
}
