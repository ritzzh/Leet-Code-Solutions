// Intuitive Solution
class Solution {
public:
    string customSortString(string order, string s) {
        map<int,int> m;
        string ans = "";
        for(char x: s)
        {
            m[x]++;
        }
        for(int i=0;i<order.length();i++)
        {
            if(m.find(order[i])!=m.end())
            {
                int t1 = m[order[i]];
                while(t1--)
                {
                    ans+=order[i];
                }
                m.erase(m.find(order[i]));
            }
        }
        for(auto x: m)
        {
            int t = x.second;
            while(t--)
            {
                ans+=x.first;
            }
        }
        return ans;
    }
};

// Optimized Solution
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26,0);
        string ans = "";
        for(char x: s)
        {
            freq[x-'a']++;
        }
        for(char p: order)
        {
            while(freq[p-'a'])
            {
                ans+= p;
                freq[p-'a']--;
            }
        }
        for( int i=0;i<freq.size();i++)
        {
            while(freq[i])
            {
                ans += i+'a';
                freq[i]--; 
            }
        }
        return ans;
    }
};
