TC: O(N)
SC: O(N)

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> nodes; // Stores the inorder traversal result
    stack<TreeNode*> st; // Stack to simulate recursion

    while (root || !st.empty()) {  
        while (root) { // Go to the leftmost node
            st.push(root);
            root = root->left;
        }
        root = st.top(); // Process the leftmost node
        st.pop();
        nodes.push_back(root->val); // Visit the root

        root = root->right; // Move to the right subtree
    }
    return nodes;
}
