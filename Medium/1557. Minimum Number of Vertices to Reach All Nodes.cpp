class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> edge(n,0);
        vector<int> ans;

        for(vector<int> x : edges){
            edge[x[1]]++;
        } 
        for(int i=0;i<edge.size();i++){
            if(edge[i]==0)
            ans.push_back(i);
        }
        return ans;
    }
};
