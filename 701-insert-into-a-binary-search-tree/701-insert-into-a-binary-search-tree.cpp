/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
          if(root == nullptr)
               return new TreeNode(val);
        
          TreeNode *   current = root; 
          TreeNode *    prev = nullptr; 
           while(current != nullptr){
               
                prev = current;
                if(current->val > val )
                    current = current->left; 
                else 
                    current= current->right;
              
           }
         if(prev->val > val)
             prev->left = new TreeNode(val);
        else
            prev->right = new TreeNode(val);
        
         return root;
    }
};