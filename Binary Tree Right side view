TC: O(N)
SC: O(H)

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }

    void recursion(TreeNode* root, int level, vector<int>& res) {
        if (root == NULL) return;  // Base case: Stop at null nodes

        if (res.size() == level) res.push_back(root->val);  // Store first node at this level (rightmost)

        recursion(root->right, level + 1, res);  // Prioritize right subtree
        recursion(root->left, level + 1, res);   // Process left subtree later
    }
};
