/*
0 ms Runtime // Beats 100%
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<m+n;i++)
        {
            if(nums1[i]==0 && j<nums2.size())
            {
                nums1[i]=nums2[j];
                j++;
            }
        }
        sort(nums1.begin(),nums1.begin()+m+n);
        
    }
};


// 11 March 2025 :: {Java Solution}
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
            return;
        }
        if (n == 0) {
            return;
        }

        int[] ans = new int[m + n];

        int x = 0;
        int y = 0;

        for (int i = 0; i < m + n; i++) {
            if (x < m && y < n) {
                ans[i] = (nums1[x] < nums2[y]) ? nums1[x++] : nums2[y++];
            } else if (x < m) {
                ans[i] = nums1[x++];
            } else {
                ans[i] = nums2[y++];
            }
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }

    }
}
