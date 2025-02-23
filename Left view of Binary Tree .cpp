TC:O(N)
SC: O(H)

class Solution {
  public:
  
  void Lview(Node* root, int level, vector<int>& ans) {
      if (!root) return;  // Base Case: If node is NULL, return.

      if (level == ans.size())  
          ans.push_back(root->data);  // If visiting this level for the first time, store the node.

      Lview(root->left, level + 1, ans);  // Recursively visit left subtree first.
      Lview(root->right, level + 1, ans); // Then visit the right subtree.
  }

  vector<int> leftView(Node *root) {
      vector<int> ans;
      if (!root) return ans;  // Handle edge case if tree is empty.
      Lview(root, 0, ans);  // Start recursion from root at level 0.
      return ans;
  }
};
