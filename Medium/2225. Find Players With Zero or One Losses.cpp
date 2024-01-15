class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> a;
        map<int, int> b;
        vector<int> t;
        vector<int> n;
        vector<vector<int>> tan;

        for (int i = 0; i < matches.size(); i++) {
            a[matches[i][0]]++;
            b[matches[i][1]]++;
        }

        for(auto y : b)
        {
            if(y.second==1)
            {
                n.push_back(y.first);
            }
        }
        for (auto x : a) {
                if (b.find(x.first)==b.end()) {
                     t.push_back(x.first);
                }
            }
        tan.push_back(t);
        tan.push_back(n);
        return tan;
    }
};
