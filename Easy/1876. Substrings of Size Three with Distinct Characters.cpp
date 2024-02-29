class Solution {
public:
    int countGoodSubstrings(string s) {
        int slen = s.length();
        int count = 0;

        if(slen<3)
        {
            return 0;
        }
        int i=0,j=2;
        for(i=0;i<slen;i++)
        {
            if((s[i]!=s[i+1]) && (s[i]!=s[j]) && (s[j]!=s[i+1]))
            {
                count++;
            }
            j++;
            if(j>=slen)
            {
                break;
            }
        }
        return count;
    }
};
