TC: O(1)
SC: O(H)

class BSTIterator {  
    private:  
    stack<TreeNode*> mystack;  // Stack to store tree nodes for controlled in-order traversal

public:  
    // Constructor: Initializes the iterator and pushes all left nodes to the stack
    BSTIterator(TreeNode* root) {  
        pushAll(root);  // Push leftmost nodes into the stack
    }  

    // Returns the next smallest element in the BST
    int next() {  
        TreeNode* temp = mystack.top();  // Get the top element (smallest available node)
        mystack.pop();  // Remove it from the stack
        pushAll(temp->right);  // If the node has a right child, process its left subtree next
        return temp->val;  // Return the value of the node
    }  

    // Checks if there are more elements to iterate
    bool hasNext() {  
        return !mystack.empty();  // If stack is not empty, we have more elements
    }  

private:  
    // Helper function to push all left nodes of a subtree into the stack
    void pushAll(TreeNode* node) {  
        for(; node != NULL; mystack.push(node), node = node->left);  // Go to leftmost node
    }  
};  
