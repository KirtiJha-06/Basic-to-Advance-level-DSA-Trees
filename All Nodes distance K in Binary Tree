TC: O(N)
SC: O(N)

class Solution {
    void parentmarks(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent, TreeNode* target) {
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            if (current->left) {
                parent[current->left] = current;  // Mark parent of left child
                q.push(current->left);
            }
            if (current->right) {
                parent[current->right] = current;  // Mark parent of right child
                q.push(current->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;  // Stores parent pointers for each node
        parentmarks(root, parent, target);  // Populate parent map using BFS

        unordered_map<TreeNode*, bool> visited;  // Marks nodes as visited during BFS
        queue<TreeNode*> q;  // Queue for BFS
        q.push(target);
        visited[target] = true;

        int curr_level = 0;  // Track the current level of BFS
        while (!q.empty()) {
            int size = q.size();
            if (curr_level++ == k) break;  // If we reached the target distance, break out of the loop
            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();

                // Explore left child if not visited
                if (current->left && !visited[current->left]) {
                    q.push(current->left);
                    visited[current->left] = true;
                }

                // Explore right child if not visited
                if (current->right && !visited[current->right]) {
                    q.push(current->right);
                    visited[current->right] = true;
                }

                // Explore parent if not visited
                if (parent[current] && !visited[parent[current]]) {
                    q.push(parent[current]);
                    visited[parent[current]] = true;
                }
            }
        }

        // Collect the results from the nodes at distance k
        vector<int> res;
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();
            res.push_back(current->val);
        }
        return res;
    }
};
