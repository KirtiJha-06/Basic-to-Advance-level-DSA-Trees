TC: O(N)
SC: O(N)

vector<int> postorderTraversal(TreeNode* root) {
    if (root == NULL) return {}; // If tree is empty, return empty vector

    vector<int> ans;  // Stores the postorder traversal result
    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* curr = st.top();
        
        if (curr->left) { // Push left child first
            st.push(curr->left);
            curr->left = NULL; // Mark as visited
        }
        else {
            if (curr->right) { // Push right child next
                st.push(curr->right);
                curr->right = NULL; // Mark as visited
            } 
            else { // Process node when both children are visited
                ans.push_back(curr->val);
                st.pop();
            }
        }
    }
    return ans;
}
