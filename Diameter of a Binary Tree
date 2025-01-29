TC: O(N)
SC: O(N)

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; 
        height(root, diameter); // Call helper function to update diameter
        return diameter;
    }

private:
    int height(TreeNode* node, int& diameter) {
        if (!node) return 0; // Base case: empty node has height 0

        int lh = height(node->left, diameter);  // Get height of left subtree
        int rh = height(node->right, diameter); // Get height of right subtree

        diameter = max(diameter, lh + rh); // Update diameter (longest path)

        return 1 + max(lh, rh); // Return height of current node
    }
};
