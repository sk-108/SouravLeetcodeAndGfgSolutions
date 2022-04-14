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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return NULL;
        }
        TreeNode * t = searchBST(root->left,val);
        TreeNode *l = searchBST(root->right,val);
        if(t!=NULL)return t;
        if(l!=NULL)return l;
        if(root->val == val)
        {
            return root;
        }
        return t;
        
    }
};