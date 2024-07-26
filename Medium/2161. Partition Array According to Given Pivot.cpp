class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int less = 0;
        int more = 0;
        vector<int> ans(nums.size(), 0);

        for (int x : nums) {
            if (x > pivot) {
                more++;
            } else {
                less++;
            }
        }
        int l = 0;
        int r = less;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                ans[l] = nums[i];
                l++;
            } else if (nums[i] > pivot) {
                ans[r] = nums[i];
                r++;
            }
        }
        while (l < less) {
            ans[l] = pivot;
            l++;
        }
        return ans;
    }
};
