class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> o;
        for( int i=0;i<nums.size();i++)
        {
            int x = target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==x)
                {
                    o.push_back(i);
                    o.push_back(j);
                    return o;
                }
            }
        }
        return o;
    }
};
