class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int k = 0;
        int high = nums.size() - 1;

        while (k <= high) {
            if (nums[k] == 0) {
                swap(nums[low], nums[k]);
                k++;
                low++;
            } else if (nums[k] == 1) {
                k++;
            } else {
                swap(nums[k], nums[high]);
                high--;
            }
        }
    }
};
