class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len = str1.length();
        int len1 = str2.length();
        string a = str1+str2;
        string b =str2+str1;
        string ans="";
        if(a!=b)
        {
            return ans;
        }
        else
        {
            int lgcd = gcd(len,len1);
            return str1.substr(0, lgcd);
            
        }
        return ans;
    }
};
