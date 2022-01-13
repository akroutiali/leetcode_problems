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
    void leftview(TreeNode*root,vector<int>&v,int level)
    {
        if(root==nullptr)
            return;
        if(v.size()==level)
        {
            v.push_back(root->val);
        }
            
        leftview(root->left,v,level+1);
        leftview(root->right,v,level+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int>v;
        leftview(root,v,0);
        return v[v.size()-1];
    }
};
