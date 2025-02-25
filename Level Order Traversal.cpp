TC: O(N)
SC: O(N)

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; // Stores the final level-order traversal result
        if (root == nullptr) return ans; // If tree is empty, return empty list

        queue<TreeNode*> q;
        q.push(root); // Start BFS by pushing the root node into the queue

        while (!q.empty()) { 
            int size = q.size(); // Number of nodes at the current level
            vector<int> level; // Stores values of nodes at the current level
            
            for (int i = 0; i < size; i++) { 
                TreeNode* node = q.front(); 
                q.pop(); // Remove front node from the queue
                level.push_back(node->val); // Store its value

                if (node->left != nullptr) q.push(node->left); // Add left child to queue
                if (node->right != nullptr) q.push(node->right); // Add right child to queue
            }
            ans.push_back(level); // Store the level-wise values in the final result
        }
        return ans; // Return the level order traversal result
    }
};
