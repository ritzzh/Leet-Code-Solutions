class Solution {
public:
    int minimumBoxes(vector<int>& app, vector<int>& cap) {
        sort(cap.begin(), cap.end(), std::greater<int>());
        int sum = 0;
        int ans = 0;
        for (int x : app) {
            sum += x;
        }
        for (int x : cap) {
            sum -= x;
            if (sum <= 0) {
                return ans + 1;
            }
            ans++;
        }
        return ans;
    }
};
