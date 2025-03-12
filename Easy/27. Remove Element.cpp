// C++ 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto i = nums.begin(); i < nums.end(); i++)
        {
            if(*i==val)
            {
                nums.erase(i);
                i--;
            }
        }
        return nums.size();
    }
};


// Java [Beats 100%]
class Solution {
    public int removeElement(int[] nums, int val) {
        int l = 0;
        int r = nums.length - 1;
        int size = nums.length;

        if (size == 1) {
            if (nums[0] == val) {
                return 0;
            } else {
                return 1;
            }
        }

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == val) {
                while (nums[r] == val && r > i) {
                    r--;
                }
                int temp = nums[r];
                nums[r] = nums[i];
                nums[i] = temp;
            }
            if (nums[i] != val) {
                l++;
            }
        }
        return l;
    }
}
