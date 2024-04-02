class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> a;
        map<char,char> b;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0; i<s.length();i++)
        {
            a[s[i]] = t[i];
            b[t[i]] = s[i];
        }
        for(int i=0; i<s.length();i++)
        {
            if(a[s[i]] != t[i])
            {
                return false;
            }
            if(b[t[i]] != s[i])
            {
                return false;
            }
            
        }
        return true;
    }
};
