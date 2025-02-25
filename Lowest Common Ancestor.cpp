TC: O(N)
SC: O(N)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base Case: If root is NULL or matches p or q, return root
        if(root == NULL || root == p || root == q){
            return root;
        }

        // Recursively find LCA in the left subtree
        TreeNode* left = lowestCommonAncestor(root->left , p, q);
        
        // Recursively find LCA in the right subtree
        TreeNode* right = lowestCommonAncestor(root->right , p , q);

        // If left is NULL, LCA must be in the right subtree
        if(left == NULL){
            return right;
        }
        // If right is NULL, LCA must be in the left subtree
        else if(right == NULL){
            return left;
        }
        // If both left and right are non-null, root is the LCA
        else{
            return root;
        }
    }
};
