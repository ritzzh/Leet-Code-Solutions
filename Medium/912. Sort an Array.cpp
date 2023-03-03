// Required O(nlog(n)) complexity, can be done using heap sort or merge sort but i'm lazy
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};
