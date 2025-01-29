TC: (3*N)
SC: (3N)

vector<vector<int>> getTreeTraversal(TreeNode *root) {
    // Stack stores pairs of TreeNode* and state (1: Preorder, 2: Inorder, 3: Postorder)
    stack<pair<TreeNode*, int>> st;
    vector<int> pre, in, post;
    
    // Edge case: If tree is empty, return empty traversal lists
    if (root == NULL) return {in, pre, post};

    st.push({root, 1}); // Start with root in Preorder state

    while (!st.empty()) {
        auto it = st.top();
        st.pop();
        
        if (it.second == 1) { // Preorder: Node -> Left -> Right
            pre.push_back(it.first->data);
            it.second++;
            st.push(it); // Push back with updated state
            
            if (it.first->left != NULL) {
                st.push({it.first->left, 1});
            }
        } 
        else if (it.second == 2) { // Inorder: Left -> Node -> Right
            in.push_back(it.first->data);
            it.second++;
            st.push(it); // Push back with updated state
            
            if (it.first->right != NULL) {
                st.push({it.first->right, 1});
            }
        } 
        else { // Postorder: Left -> Right -> Node
            post.push_back(it.first->data);
        }
    }
    
    return {in, pre, post}; // Return all traversals
}
