TC: O(N)
SC: O(N)

vector<int> bottomView(Node *root) {
    vector<int> ans;
    if(root == NULL) return ans;  // Edge case: If tree is empty
    
    map<int, int> mp;  // Stores the last node at each horizontal distance (HD)
    queue<pair<Node*, int>> q;  // Queue for level-order traversal (BFS)
    q.push({root, 0});  // Push root with HD = 0
    
    while(!q.empty()) {
        auto it = q.front(); q.pop();
        Node* node = it.first;
        int line = it.second;
        mp[line] = node->data;  // Update the last-seen node at this HD
        
        if(node->left) q.push({node->left, line - 1});  // Left child HD - 1
        if(node->right) q.push({node->right, line + 1});  // Right child HD + 1
    }
    
    for(auto it : mp) ans.push_back(it.second);  // Extract bottom view from map
    return ans;
}
