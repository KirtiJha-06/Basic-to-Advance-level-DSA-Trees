TC: O(N)
SC: O(N)

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0; // Base case: Empty tree has depth 0

        int lh = maxDepth(root->left);  // Recursively find left subtree depth
        int rh = maxDepth(root->right); // Recursively find right subtree depth

        return 1 + max(lh, rh); // Return max of left & right depth + 1 for root
    }
};
