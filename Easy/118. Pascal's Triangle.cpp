//beats 100%

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <int> a;
        vector <int> b;
        vector<vector<int>> x;
        a.push_back(1);
        x.push_back(a);
        for(int i=1;i<numRows;i++) // rows [1] [2] [3]
        {
            b.push_back(1);
            for(int j=0;j<a.size();j++) // columns [1] [1,1] [1,2,1]
            {
                if(a[j]==1 && j==(a.size()-1))
                {
                    b.push_back(a[j]);
                    j++;
                }
                else 
                {
                    int x = a.at(j)+a.at(j+1);
                    b.push_back(x);  
                }
            }
            if(b.empty())
            {
                cout<<"tf";
                exit(0);
            }
            else
            {
                x.push_back(b);
            }
            a=b;
            b.clear();
        }

        return x;
    }
};
