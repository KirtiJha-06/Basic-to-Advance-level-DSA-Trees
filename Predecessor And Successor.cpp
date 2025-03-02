TC: O(H)
SC: O(H)

class Solution  
{  
    public:  
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)  
    {  
        // Base case: If the root is NULL, return (tree is empty or traversal is complete)
        if(root == NULL)  
        {  
            return;  
        }  

        // If the key is smaller than the current root’s key,  
        if(key < root->key)  
        {  
            suc = root;  // The current node is a potential successor
            findPreSuc(root->left , pre , suc , key); // Move to the left subtree to find a closer successor  
        }  
        // If the key is greater than the current root’s key,  
        else if(key > root->key)  
        {  
            pre = root;  // The current node is a potential predecessor  
            findPreSuc(root->right , pre, suc , key); // Move to the right subtree to find a closer predecessor  
        }  
        else  // If the key is equal to the root’s key  
        {  
            // Finding predecessor: The largest value in the left subtree  
            if(root->left != NULL)  
            {  
                Node* temp = root->left;  
                while(temp->right != NULL)  // Move to the rightmost node in the left subtree  
                {  
                    temp = temp->right;  
                }  
                pre = temp;  // This is the predecessor  
            }  

            // Finding successor: The smallest value in the right subtree  
            if(root->right != NULL)  
            {  
                Node* temp = root->right;  
                while(temp->left != NULL)  // Move to the leftmost node in the right subtree  
                {  
                    temp = temp->left;  
                }  
                suc = temp;  // This is the successor  
            }  
        }  
    }  
};  
