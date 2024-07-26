class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l = 0;
        int r = nums.size() - 1;
        int x = 0;
        int y = r;
        vector<int> ans(r + 1, 0);

        while (l < nums.size()) {
            if (nums[l] < pivot) {
                ans[x] = nums[l];
                x++;
            }
            if (nums[r] > pivot) {
                ans[y] = nums[r];
                y--;
            }
            l++;
            r--;
        }
        while (x <= y) {
            ans[x] = pivot;
            x++;
        }
        return ans;
    }
};
