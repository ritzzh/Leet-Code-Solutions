class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> a;
        vector<pair<int,int>> he;
        for(int x: nums)
        {
            a[x]++;
        }

        for(auto x: a)
        {
            pair<int,int> temp;
            temp.first = x.second;
            temp.second = x.first;
            cout<<x.first<<" "<<x.second<<endl;
            he.push_back(temp);
        }
        sort(he.begin(),he.end());
        while(k--)
        {
            ans.push_back(he[he.size()-1].second);
            he.erase(he.begin()+(he.size()-1));
        }

        return ans;
    }
};
