TC: O(N)
SC: O(N)

class Solution {
public:
#define ll long long  // Define ll as long long to handle large indices

    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;  // Queue stores node and its index
        q.push({root, 0});  // Start BFS with root node at index 0
        int max_width = INT_MIN;  // Track maximum width

        while (!q.empty()) {
            int size = q.size();  // Get number of nodes at the current level
            int min_idx = q.front().second;  // Normalize index to avoid overflow
            int first_idx, last_idx;

            for (int i = 0; i < size; i++) {
                TreeNode* curr_node = q.front().first;  // Extract current node
                int curr_idx = q.front().second;  // Extract its index
                q.pop();

                curr_idx -= min_idx;  // Normalize index to prevent overflow
                
                if (i == 0) first_idx = curr_idx;  // First node's index at this level
                if (i == size - 1) last_idx = curr_idx;  // Last node's index at this level

                // Push left child with calculated index (2 * index + 1)
                if (curr_node->left) {
                    q.push({curr_node->left, (ll)2 * curr_idx + 1});
                }

                // Push right child with calculated index (2 * index + 2)
                if (curr_node->right) {
                    q.push({curr_node->right, (ll)2 * curr_idx + 2});
                }
            }
            max_width = max(max_width, last_idx - first_idx + 1);  // Update max width
        }

        return max_width;  // Return the maximum width found
    }
};
