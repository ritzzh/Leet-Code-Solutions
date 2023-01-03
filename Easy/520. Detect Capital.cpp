//C++

class Solution {
public:
    bool detectCapitalUse(string word) {
        int first=0;
        int count=0;
        if(isupper(word[0]))
           {
               first++;
           }
       for(int i=0;i<word.length();i++)
       {
           if(isupper(word[i]))
           {
               count++;
           }
       }
       if(count==word.length() || count==0)
       {
           return true;
       }
       else if(first==1 && count==1)
       {
           return true;
       }
       return false;
    }
};
