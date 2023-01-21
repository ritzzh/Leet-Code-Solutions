class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> n;
        set <int> x;
        int i=0,j=0;
        for(j=0;j<b;j++)
        {
            if(i<a)
            {
                if(nums1[i]==nums2[j])
                {
                    x.insert(nums1[i]);
                    ++i;
                }
                else
                {
                    if(nums1[i]<nums2[j])
                    {
                        i++;
                        j--;
                    }
                }
            }
            
        }
        for( auto i : x)
        {
            n.push_back(i);
        }
        return n;
        
    }
};
