TC: O(N)
SC: O(N)

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;  // Initialize maximum sum
        maxPath(root, maxi); // Compute max path sum using DFS
        return maxi;
    }

private:
    int maxPath(TreeNode* node, int& maxi) {
        if (node == NULL) return 0; // Base case: null node contributes 0

        // Compute left and right subtree sums, ignoring negative values
        int left = max(0, maxPath(node->left, maxi));
        int right = max(0, maxPath(node->right, maxi));

        // Update the maximum sum considering current node as the root of a path
        maxi = max(maxi, left + right + node->val);

        // Return the maximum path sum that includes the current node
        return max(left, right) + node->val;
    }
};
