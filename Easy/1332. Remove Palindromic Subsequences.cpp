class Solution {
public:
    int removePalindromeSub(string s) {
        int j = s.length() - 1;
        for (int i = 0; i <= s.length() / 2; i++) {
            if (s[i] == s[j]) {
                j--;
            } else {
                return 2;
            }
        }
        return 1;
    }
};
