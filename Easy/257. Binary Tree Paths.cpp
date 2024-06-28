class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string t="";
        check(root,ans,t);
        return ans;
    }
    void check(TreeNode*root, vector<string> &ans, string t)
    {
        if(root->left==NULL && root->right==NULL) {t+=to_string(root->val);ans.push_back(t);return;}
        if(root->left!=NULL){
            check(root->left, ans, t+to_string(root->val)+"->");
        }
        if(root->right!=NULL){
            check(root->right, ans, t+to_string(root->val)+"->");
        }
    }
};
