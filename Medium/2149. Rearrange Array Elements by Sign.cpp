class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int l = 0;
        int r = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                nums[i] = pos[l];
                l++;
            } else {
                nums[i] = neg[r];
                r++;
            }
        }
        return nums;
    }
};

//Optimized using two pointers

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0;
        int n = 1;
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[p] = nums[i];
                p++;p++;
            } else {
                ans[n] = nums[i];
                n++;n++;
            }
        }
        return ans;
    }
};
