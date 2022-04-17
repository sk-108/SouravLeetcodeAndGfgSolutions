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
    TreeNode* inorder(TreeNode* root, TreeNode* temp)
    {
        if(root==NULL)return temp;
        temp = inorder(root->left,temp);
        temp->right = root;
        root->left = NULL;
        temp = temp->right;
       temp =  inorder(root->right,temp);
        return temp;
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode * ans = new TreeNode(0);
        TreeNode * temp = ans;
        inorder(root,temp);
        return ans->right;
    }
};