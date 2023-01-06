/*
C++
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,loc=0;
        for( int x :nums)
        {
            if(x==target)
            {
                return i;
            }
            if(x<=target)
            {
                loc=i;
            }
            i++;
        }
        if(nums[loc]<target)
            return loc+1;
        else
            return loc;
    }
};
