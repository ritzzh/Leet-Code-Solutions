class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> second_half;
        vector <int> first_half;
        int i=1;
        second_half.push_back(nums[0]);
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                break;
            }
            second_half.push_back(nums[i]);
        }
        for(int o=i;o<nums.size();o++)
        {
            first_half.push_back(nums[o]);
        }
        for(auto x:second_half)
        {
            first_half.push_back(x);
        }
        sort(nums.begin(),nums.end());
        
        if(first_half==nums)
        {
            return true;
        }
        return false;

    }
};
