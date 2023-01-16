class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,current=0;
        vector <int> un;
        un=nums;
        sort(un.begin(), un.end());   
        auto last = unique(un.begin(), un.end());  
        un.erase(last, un.end());  
        
        for(auto x : un)
        {   
            cout<<"outer loop, count:";
            count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums.at(i)==x)
                {
                    count++;
                    current = nums.at(i);
                }
            }
            if(count>nums.size()/2)
            {
                return x;
            }
        }
        return current;
    }
};
