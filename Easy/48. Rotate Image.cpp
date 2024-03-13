class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;

        for(int i=0;i<matrix.size();i++){
            vector<int> temp;
            for(int j=matrix.size()-1;j>=0;j--)
            {
                int x = matrix[j][i];
                temp.push_back(x);
            }
            ans.push_back(temp);
            temp.clear();
        }
        matrix = ans;
    }
};
