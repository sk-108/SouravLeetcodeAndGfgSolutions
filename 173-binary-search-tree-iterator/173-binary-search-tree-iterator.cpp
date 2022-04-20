class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
		iter.push(root);
		current = root->left;
    }
    
    int next() {
		TreeNode *node;

		while (current != nullptr) {
			iter.push(current);
			current = current->left;
		}

		node = iter.top();
		iter.pop();
		current = node->right;
		return node->val;
    }
    
    bool hasNext() {
        return !iter.empty() || current != nullptr;
    }

private:
	stack<TreeNode*> iter;
	TreeNode *current;
};