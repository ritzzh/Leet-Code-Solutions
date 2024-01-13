class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> a;
        map<char,int> b;
        int len = s.length();

        for(char x: s){
            a[x]++;
        }
        for(char x: t){
            b[x]++;
        }

        for(auto x: b)
        {
            for(auto y:a)
            {
                if(x.first==y.first)
                {
                    if(x.second==y.second)
                    {
                        len-= x.second;
                    }
                    else
                    {
                        int min = x.second<y.second?x.second:y.second;
                        len = len - min;
                    } 
                }
            }
        }

        return len;
    }
};
