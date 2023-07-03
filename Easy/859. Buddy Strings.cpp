class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        int l1 = s.length();
        int l2 = goal.length();
        int count=0;
        if(l1!=l2)
        {
            return false;
        }
        bool sw = false;
        for(int i=0;i<l1;i++)
        {            
            if(s[i]!=goal[i])
            {
                int index=-1;
                for(int j=i;j<l1;j++)
                {
                    if(s[j]==goal[i])
                    {
                        index=j;
                    }
                }
                if(index!=-1)
                {
                    swap(s[i],s[index]);
                    return (s==goal);
                    sw = true;
                }
                else
                {
                    return false;
                }
                
            }
        }

        if(sw==false)
        {
            sort(s.begin(),s.end());
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==s[i+1])
                {
                    return true;
                }
            }       
        }
        return false;
    }
};
