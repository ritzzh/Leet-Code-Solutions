class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        Set<Integer> a = new HashSet<Integer>();
        int[]ans = new int[2];
        int i=0;
        for(int num: nums)
        {
            if(a.contains(num)){
                ans[i]=num;
                i++;
            }
            else{
                a.add(num);
            }
        }
        return ans;
    }
}
