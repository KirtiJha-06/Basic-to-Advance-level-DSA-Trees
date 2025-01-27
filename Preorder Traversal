TC: O(N)
SC: O(N)

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder; // Stores the preorder traversal result
    if(root == NULL) return preorder; // If tree is empty, return empty vector

    stack<TreeNode*> st;
    st.push(root); // Push root node to start traversal

    while(!st.empty()) {
        root = st.top(); // Get the top node
        st.pop();

        preorder.push_back(root->val); // Visit the root node

        // Push right child first so that left child is processed first (LIFO order)
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
    }
    return preorder;
}
