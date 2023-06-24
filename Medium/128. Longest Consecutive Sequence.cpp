class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int count=0;
        int max=0;
        if(nums.size()==0)
        {
            return 0;
        }
        set<int> uset(nums.begin(), nums.end());
        auto y = uset.begin();

        for(auto x: uset)
        {
            max = max>count?max:count;
            y++;
            if(x==*(y)-1){
                count++;
            }
            else 
            {
                count=0;
            } 
            
        }
        return max+1;
    }
};
