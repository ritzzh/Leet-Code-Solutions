class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int res = 0;
        map<int, map<int, int>> a;
        for (vector<int> x : pick) {
            a[x[0]][x[1]]++;
        }
        for (auto x : a) {
            for (auto y : x.second) {
                if (y.second > x.first) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};
