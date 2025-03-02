TC: O(NlogN)
SC: O(N)

class Solution {
public:
    int i = 0;  // Index to track position in sorted array
    vector<int> inorder;  // Stores the inorder traversal of the BST

    void FindInorder(Node* root) {
        if (!root) return;  
        FindInorder(root->left);  // Recursively visit left subtree
        inorder.push_back(root->data);  // Store current node value
        FindInorder(root->right);  // Recursively visit right subtree
    }

    void solve(Node* root) {
        if (!root) return;
        solve(root->left);  // Recursively visit left subtree
        root->data = inorder[i++];  // Assign sorted value back to BST
        solve(root->right);  // Recursively visit right subtree
    }

    void correctBST(Node* root) {
        if (!root) return;
        FindInorder(root);  // Step 1: Store inorder traversal in vector
        sort(inorder.begin(), inorder.end());  // Step 2: Sort the inorder array
        i = 0;  // Reset index for assigning sorted values
        solve(root);  // Step 3: Restore BST structure using sorted values
    }
};
