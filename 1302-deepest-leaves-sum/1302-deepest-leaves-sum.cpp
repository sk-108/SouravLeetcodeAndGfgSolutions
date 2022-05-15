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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        int sum = 0;
        sum += root->val;
        q.push(root);
        int nodes = 1;
        while(!q.empty())
        {
            sum = 0;
            int no = nodes;
            nodes=0;
            for(int i=0;i<no;i++)
            {
                // if(q.empty())break;
                TreeNode* tp = q.front();
                sum += tp->val;
                q.pop();  
                if(tp->left)
                {
                    q.push(tp->left);
                    nodes++;
                }
                if(tp->right)
                {
                    q.push(tp->right);
                    nodes++;
                }
            }

        }
        return sum;
    }
};