class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1 = 0;
        int count0 = 0;
        for (char x : s) {
            if (x == '1') {
                count1++;
            }
        }
        count0 = s.length() - count1;

        string ans = "";
        for (int i = 0; i < s.length() - 1; i++) {
            if (count1 >= 2) {
                ans += "1";
                count1--;
            } else {
                ans += "0";
            }
        }
        ans += "1";
        return ans;
    }
};
