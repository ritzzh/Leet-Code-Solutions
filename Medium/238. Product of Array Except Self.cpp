class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a;
        int zero = 0;
        int mul = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                mul *= nums[i];
            } else {
                zero++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            int ans = 0;
            if (nums[i] != 0) {
                if (zero >= 1) {
                    a.push_back(0);
                } else {
                    ans = mul / nums[i];
                    a.push_back(ans);
                }
            } 
            else if (nums[i]==0) 
            {
                if(zero>1)
                {
                    a.push_back(0);
                }
                else
                {
                    a.push_back(mul);
                }
            }
        }
        return a;
    }
};
