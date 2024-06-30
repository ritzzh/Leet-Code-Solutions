class Solution {
public:
    string makeSmallestPalindrome(string s) {
        if (ispal(s)) {
            return s;
        }

        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                if (s[i] > s[j])
                    s[i] = s[j];
                else
                    s[j] = s[i];
            }
        }
        return s;
    }
    bool ispal(string s) {
        int i = 0;
        int j = s.length();
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
};
