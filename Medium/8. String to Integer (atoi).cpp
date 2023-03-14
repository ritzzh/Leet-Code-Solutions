class Solution {
public:
    int myAtoi(string s) {
       string num="";
       for(char x: s)
       {
           if(x==' ' && num!="")
           {
               break;
           }
           else if(x!=' ')
           {
               if(isalpha(x) & num=="")
               {
                   return 0;
               }
               else 
               {
                   num += x;
               }
           }
       }
       stringstream str(num);
       int i=0;
       str>>i;
       return i;
    }
};
