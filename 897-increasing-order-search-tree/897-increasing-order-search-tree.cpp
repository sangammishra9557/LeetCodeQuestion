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
    
     void helper(TreeNode * root, TreeNode * &curr)
     {
          if(root == nullptr)
              return ; 
           helper( root->left , curr);
             root->left = nullptr;
             curr->right =  root; 
             curr = root; 
           helper(root->right ,  curr);
           
         
     }
    TreeNode* increasingBST(TreeNode* root) {
         
          TreeNode  *  newRoot = new TreeNode(0);
          auto curr =  newRoot;
          
           helper(root, curr);
           return  newRoot->right ; 
         
             
    
    }
};