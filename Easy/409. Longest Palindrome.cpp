class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> a;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]]++;
        }
        int count=1;
        bool sep = false;
        for(auto x : a)
        {
            if((x.second)%2==0)
            {
                count = count+(x.second);
            }
            else
            {
                sep=true;
                count = count+((x.second)-1);
            } 
        }
        if(sep==false)
        {
            return count-1;
        }
        return count;
    }
};
