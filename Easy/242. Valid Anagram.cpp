class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> o1;
        unordered_map <char, int> o2;
        bool check = false;
        int a = s.length();
        int b = t.length();
        if(a!=b)
        {
            return false;
        }
        else
        {
            for(int i=0;i<a;i++)
            {
                o1[s[i]]++;
                o2[t[i]]++;
            }
            for(auto x : o1)
            {
                for(auto y: o2)
                {
                    cout<<" char in first: "<<x.first<<" char in second: "<<y.first<<endl;
                    if(x.first==y.first)
                    {
                        cout<<" count in first: "<<x.second<<" count in second: "<<y.second<<endl;
                        if(x.second==y.second)
                        {
                            check =true;
                            break;
                        }
                        else
                        return false;
                    }
                    else
                    {
                        check = false;
                    }
                }
                if(check==false)
                {
                    return false;
                }
            }
        }

       return check; 
    }
};
