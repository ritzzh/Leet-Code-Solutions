class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                return true;
            }
        }
        return false;
    }
};

/* JAVA Solution using hashmap
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer,Integer> a = new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++)
        {
            if(!a.containsKey(nums[i]))
            {
                a.put(nums[i],1);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
}
*/
