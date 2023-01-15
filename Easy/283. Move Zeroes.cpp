class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0,s = nums.size();
        vector <int> oui;
        for(int i=0;i<s;i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {
                oui.push_back(nums[i]);
            }
        }
        while(count--)
        {
            oui.push_back(0);
        }
        nums=oui;
    }
};
