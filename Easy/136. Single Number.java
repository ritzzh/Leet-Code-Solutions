// Bruteforce C++ Solution //
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a ;
        for(int i =0 ;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(auto x: a)
        {
            if(x.second==1)
            {
                return x.first;
            }
        }
        return -1;
    }
};
*/

//optimised Java Solution
class Solution {
    public int singleNumber(int[] nums) {
        int ans = nums[0];
        for(int i=1;i<nums.length;i++)
        {
            ans = ans^nums[i];
        }
        return ans;
    }
}
