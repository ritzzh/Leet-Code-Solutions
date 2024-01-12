class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int max = 0;
        map<int, int> count;
        vector<vector<int>> two;

        for (int x : nums) {
            count[x]++;
            if (count[x] > max) {
                max = count[x];
            }
        }
        for (int i = 0; i < max; i++) {
            vector<int> temp;
            for (auto x : count) {
                if (x.second != 0) {
                    temp.push_back(x.first);
                    --count[x.first];
                }
            }
            two.push_back(temp);
            temp.clear();
        }

        return two;
    }
};
