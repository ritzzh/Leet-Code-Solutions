//C++

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream strcin(s);
        string y;
        int count=0;
        while(strcin>>y)
        {
            count++;
        }
        return y.length();

    }
};
