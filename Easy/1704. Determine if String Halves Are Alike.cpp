class Solution {
public:
    bool halvesAreAlike(string s) {
        int counta = 0;
        int countb = 0;

        for (int i = 0; i < s.length() / 2; i++) {
            int j = s.length() / 2 + i;
            if (check(s[i])) {
                counta++;
            }
            if (check(s[j])) {
                countb++;
            }
        }
        if (counta == countb) {
            cout << counta << " " << countb << endl;
            return true;
        }

        return false;
    }
    bool check(char x) {
        char l[] = "aeiouAEIOU";
        for (char a : l) {
            if (x == a) {
                return true;
            }
        }
        return false;
    }
};
