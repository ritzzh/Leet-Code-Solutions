class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto x: matrix)
        {
            if(x[0]<=target)
            {
                for(auto i = x.begin();i<x.end();i++)
                {
                    if(*i==target)
                    {
                        return true;
                    }
                }
            }
            else
            {
                return false;

            }
           
        }
        return false; 
    }
};
