//C++

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for( auto x = (nums.begin()+1); x!=(nums.end()); x++)
        {
            if( *(x-1)==*(x))
            {
                nums.erase(x);
                x = nums.begin();
            }
        }
        int count=0;
        for( auto x:nums)
        {
            // cout<<x<<" ";
            count++;
        }
        return count;
    }
};
