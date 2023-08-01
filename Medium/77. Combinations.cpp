// Took Help From Youtube
class Solution {
public:
    void possol(int idx, int n, vector<int> te, vector<vector<int>> &resultArr, int size)
    {
        if(te.size()==size)
        {
            resultArr.push_back(te);
        }
        for(int i=idx;i<=n;i++)
        {
            te.push_back(i);
            possol(i+1,n,te, resultArr,size);
            te.erase(te.begin()+te.size()-1);
        }
    }
    vector<vector<int>> combine(int n, int size) { 
        vector<vector<int>> resultArr;
        vector<int> a;
        possol(1,n,a, resultArr,size);
        return resultArr;
    }
    
};
