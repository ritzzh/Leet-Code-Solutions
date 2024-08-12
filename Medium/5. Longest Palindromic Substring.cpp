class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        if (n == 0)
            return "";
        int maxlen = 1;
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length(), false));
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for (int len = 2; len <=n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (s[i] == s[j]) {
                    if (len == 2) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                    if (dp[i][j] && len > maxlen) {
                        maxlen = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};
