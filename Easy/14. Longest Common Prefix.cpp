class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        sort(strs.begin(),strs.end());
        string one = strs.at(0);
        bool check = false;
        
        for(int i=0;i<one.length();i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=one[i])
                {
                    return prefix;
                }
            }
            prefix+=one[i];
        }
        
        return prefix;
    }
};
