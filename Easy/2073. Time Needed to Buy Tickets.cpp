class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int count = 0;
        int i = 0;
        while (t[k] != 0) {
            if (t[i] > 0) {
                t[i]--;
                count++;
            }
            if (i == t.size() - 1) {
                i = 0;
            } else {
                i++;
            }
        }
        return count;
    }
};
