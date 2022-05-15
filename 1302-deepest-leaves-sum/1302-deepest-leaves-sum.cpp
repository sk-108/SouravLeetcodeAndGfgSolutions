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
    int tall(TreeNode* root,int h)
    {
        if(root==NULL)return h;
        int b = 1 + tall(root->left,h);
        
        int b2 = 1 + tall(root->right,h);
        if(b>b2)
        {
            h = b;
            return b;
        }
        else{
            h = b2;
            return b2;
        }
        
    }
    int summ(TreeNode * root, int& s,int height)
    {
        if(root == NULL)
        {
            return s;
        }
        if(height == 1)
        {
            s += root->val;
            return s;
        }
        summ(root->left,s,height-1);
        summ(root->right,s,height-1);
        return s;
    }
    int deepestLeavesSum(TreeNode* root) {
        TreeNode * temp = root;
        int height = tall(root,0);
        int sum =0;
        summ(root,sum,height);
        return sum;
    }
};