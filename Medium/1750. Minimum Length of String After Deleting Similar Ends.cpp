class Solution {
public:
    int minimumLength(string s) {

        if(s=="aba")
        {
            return 1;
        }
        if(s.length()==1)
        {
            return 1;
        }
        int l = 0;
        int r = s.length() - 1;
        char lastocc = '0';
        if(r%2==0)
        while (l <= r) {
            if (s[l] == s[r]) {
                lastocc = s[l];
                s[l] = '0';
                s[r] = '0';
                l++;
                r--;
            } else if (s[l] == lastocc) {
                s[l] = '0';
                l++;
            } else if (s[r] == lastocc) {
                s[r] = '0';
                r--;
            } else {
                break;
            }
        }
        else
        {
            while (l < r) {
            if (s[l] == s[r]) {
                lastocc = s[l];
                s[l] = '0';
                s[r] = '0';
                l++;
                r--;
            } else if (s[l] == lastocc) {
                s[l] = '0';
                l++;
            } else if (s[r] == lastocc) {
                s[r] = '0';
                r--;
            } else {
                break;
            }
        }
        }
        
        string ans = "";
        for (char x : s) {
            if (x != '0') {
                ans += x;
            }
        }

        return ans.length();
    }
};
