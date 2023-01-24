class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> l(r, vector<int>(c,0));
        vector <int>x;
        int rows = mat.size();
        int cols=mat[0].size();
        if(rows*cols != r*c)
        {
            return mat;
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                x.push_back(mat[i][j]);
            }

        }
        int oo=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                l.at(i).at(j)=x[oo];
                oo++;
            }

        }
        return l;
    }
};
