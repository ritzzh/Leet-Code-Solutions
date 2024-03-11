class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> a;
        int max =0;
        int count=0;
        for(int x: nums)
            {
            a[x]++;
            if(a[x]>max)
                {
                max= a[x];
            }
        }
        
        for(auto x: a)
            {
            if(x.second==max){

            count+=x.second;
            }
        }
        return count;
    }
};
