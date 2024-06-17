class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        recur(0,nums,temp,ans,nums.size());
        return ans;
    }
    void recur(int index, vector<int> &nums,vector<int> &temp, vector<vector<int>> &ans,int size)
    {
        ans.push_back(temp);
        for(int i=index;i<size;i++)
        {
            temp.push_back(nums[i]);
            recur(i+1,nums,temp,ans,size);
            temp.pop_back();
        }
        return;
    }
};
