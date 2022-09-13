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
  
    int goodNodes(TreeNode* root) {
        int count = 0 ; 
        int val = INT_MIN;
        helper(root , val , count);
        return count;
    
    }
     void helper(TreeNode * root , int val  , int &count){
          if( root == NULL) return;
          if ( root->val >=  val) count++;
          val = max( root->val , val);
          helper(root->left , val , count);
          helper(root->right , val , count);
         
     }
};