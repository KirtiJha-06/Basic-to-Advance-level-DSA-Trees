TC: O(N)
SC: O(N)
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1; // If -1 is returned, tree is not balanced
    }

    int dfsHeight(TreeNode* root) {
        if (root == NULL) return 0; // Base case: height of empty tree is 0

        int lh = dfsHeight(root->left);  // Recursively find left subtree height
        if (lh == -1) return -1;        // If left subtree is unbalanced, return -1

        int rh = dfsHeight(root->right); // Recursively find right subtree height
        if (rh == -1) return -1;        // If right subtree is unbalanced, return -1

        if (abs(lh - rh) > 1) return -1; // If height difference > 1, tree is unbalanced

        return 1 + max(lh, rh); // Return height of the current node
    }
};
