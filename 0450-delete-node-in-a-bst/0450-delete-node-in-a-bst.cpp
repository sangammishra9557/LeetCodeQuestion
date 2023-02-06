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
    TreeNode * maximum( TreeNode * root){
          
      while(root->right != NULL) root = root->right;
      return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
          if(root == NULL)
               return NULL;
          
          if(root->val < key)
               root->right = deleteNode(root->right,key);
          else if(root->val > key)
               root->left = deleteNode(root->left, key);
        
         else{
             
              if(root->left != NULL && root->right != NULL)
              {
                   TreeNode *  prev =  maximum(root->left);
                   prev->right = root->right;
                   //root->left =  deleteNode(root->left,lmax); // left side  ko bolo ki apne side se lmax ko delete kr do 
                   return root->left;
              }
             else if (root->left != NULL)
                {
                 return root->left;
             }
             else if( root->right != NULL)
             {
                 return root->right; 
                 
             }
              else {
                   return NULL;
              }
             
         }
         return root; 
        
    }
};