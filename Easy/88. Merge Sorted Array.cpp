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
