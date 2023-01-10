// slow but works

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector <int> pt;
    vector <int> qt;
    void traverseinorder( TreeNode* x, vector<int> &xy)
    {
        if(x)
        {
            
            traverseinorder(x->left, xy);
            xy.push_back(x->val);
            traverseinorder(x->right, xy);
            xy.push_back(-1);
                        
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check=false;
        traverseinorder(p,pt);
        traverseinorder(q,qt);
        if(pt.size()==0 && qt.size()==0)
        {
            return true;
        }
        if(pt.size()!=qt.size())
        {
            return false;
        }
        for(int a =0; a< pt.size();a++)
        {   
            cout<<a<<" "<<pt[a]<<" "<<qt[a]<<endl;
            if(pt[a]==qt[a])
            {
                check=true;
            }
            else
            {
                return false;
            }
        }
        return check;

    }
};
