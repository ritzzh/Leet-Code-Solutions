class Solution {
public:
    string makeGood(string s) {
        stack<char> a;
        string ans = "";
        bool pop =true;
        for(char x: s)
        {
            if(!a.empty())
            {
                char t = a.top();
                t = toupper(t);
                if((t==x || a.top() == toupper(x))&& a.top()!=x)
                {
                    a.pop();
                    pop = false;
                    if(!a.empty())cout<<a.top()<<endl;
                }
            }
            if(pop)
            {
                a.push(x);
            }
            pop = true;
        }
        while(!a.empty())
        {
            char l = a.top();
            ans += l;
            a.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
