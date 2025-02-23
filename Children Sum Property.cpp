TC: O(N)
SC: O(H)

class Solution {
public:
    // Function to check whether all nodes of a tree have the value 
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        // Base case: If the root is NULL or it's a leaf node, return 1 (true)
        if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return 1;
        }

        int sum = 0;

        // If left child exists, add its data to the sum
        if (root->left != NULL) sum += root->left->data;
        
        // If right child exists, add its data to the sum
        if (root->right != NULL) sum += root->right->data;

        // Check if current node's data equals sum of its children and
        // recursively check the sum property for left and right subtrees
        return (root->data == sum && isSumProperty(root->left) && isSumProperty(root->right));
    }
};
