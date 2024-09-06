class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        Set<Integer>test = new HashSet<Integer>();
        for(int x: nums)
        {
            test.add(x);
        }
        ArrayList<Integer> a = new ArrayList<Integer>();
        for(int i=1;i<=nums.length;i++)
        {
            if(!test.contains(i)){
                a.add(i);
            }
        }
        return a;
    }
}
