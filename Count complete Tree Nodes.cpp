TC: O((logN)^2)
SC: O(logN)

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;  // 🟢 Base Case: If tree is empty, return 0

        int lh = findleftheight(root);  // 🟠 Find the leftmost depth of the tree
        int rh = findrightheight(root); // 🟠 Find the rightmost depth of the tree

        if(lh == rh) return (1 << lh) - 1; // 🟡 If the tree is perfect, use formula 2^h - 1
        
        return 1 + countNodes(root->left) + countNodes(root->right); // 🔵 If not perfect, recursively count nodes
    }

    int findleftheight(TreeNode* node) {
        int height = 0;
        while(node) {  // 🟢 Traverse left until reaching NULL
            height++;
            node = node->left;
        }
        return height; // 🔴 Return left height
    }

    int findrightheight(TreeNode* node) {
        int height = 0;
        while(node) {  // 🟢 Traverse right until reaching NULL
            height++;
            node = node->right;
        }
        return height; // 🔴 Return right height
    }
};
