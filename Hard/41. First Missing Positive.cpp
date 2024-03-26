class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> a(100000);
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] > 0 && nums[i] < nums.size()) {
                a[nums[i]] = 1;
            }
        }
        for (int i = 1; i < max; i++) {
            cout << a[i] << endl;
            if (a[i] == 0) {
                return i;
            }
        }
        return max + 1;
    }
};
