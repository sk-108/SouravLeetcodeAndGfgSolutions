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
    void find(TreeNode * root,int k,vector<int>&a)
    {
        if(root == NULL)
        {
            return ;
        }
        find(root->left,k,a);
        a.push_back(root->val);
        find(root->right,k,a);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
         find(root,k,ans);
        for(int i=0;i<ans.size();i++)
        {
            k--;
            if(k == 0)
            {
                return ans[i];
            }
        }
        return ans[k-1];
        
    }
};