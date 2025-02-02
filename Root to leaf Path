TC: O(N)
SC: O(H)
class Solution {
  public:
    void solve(Node* root, vector<int>& ans, vector<vector<int>>& res) {
        if (root == NULL) return;
        
        ans.push_back(root->data);  // Add current node to path

        if (root->left == NULL && root->right == NULL) {
            res.push_back(ans);  // Store the path when a leaf is reached
        } else {
            solve(root->left, ans, res);
            solve(root->right, ans, res);
        }
        
        ans.pop_back();  // Backtrack to explore other paths
    }

    vector<vector<int>> Paths(Node* root) {
        vector<int> ans;
        vector<vector<int>> res;
        solve(root, ans, res);
        return res;
    }
};
