//C++

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        string a = strs.at(0);
        int len = a.length();

        for(int j=0;j<len;j++)
        {
            for(int i =1;i<strs.size();i++)
            {
                if(strs.at(i-1).at(j) <= strs.at(i).at(j))
                {
                    continue;
                }
                else
                {
                    count++;
                    break;
                }
                
            }
        }
        return count;
    }
};
