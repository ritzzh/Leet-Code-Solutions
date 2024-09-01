class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& ori, int m, int n) {
        vector<vector<int>> arr;
        int i = 0;
        while (m > 0) {
            int t = n;
            vector<int> temp;
            while (t--) {
                if (i == ori.size()) {
                    arr.clear();
                    return arr;
                }
                temp.push_back(ori[i]);
                i++;
            }
            arr.push_back(temp);
            temp.clear();
            m--;
        }
        if (i != ori.size()) {
            arr.clear();
            return arr;
        }
        return arr;
    }
};
