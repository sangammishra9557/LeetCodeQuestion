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
    bool isUnivalTree(TreeNode* root) {
        
        
         return helper( root , root->val);
        
    }
     
     bool helper(TreeNode * root  , int  par){
           if( root == NULL)  return true ; 
          if( root-> val   != par)
               return false;
          int left = helper( root->left ,   root->val);
          int right = helper( root->right  ,   root->val);
          return left && right ;
     }
};