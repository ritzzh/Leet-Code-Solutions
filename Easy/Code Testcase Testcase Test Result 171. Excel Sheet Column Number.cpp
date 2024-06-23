class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0, index = columnTitle.size()-1;
        for(auto it: columnTitle)
        {
            ans += (it-64)*pow(26,index--);
        }
        return ans;
    }
};
