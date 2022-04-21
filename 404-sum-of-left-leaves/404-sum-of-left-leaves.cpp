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
    int sumOfLeftLeaves(TreeNode* root) {
         int ans = 0 ; 
         helper(root , false , ans);
         return ans;
    }
    
  private :
     void    helper(TreeNode * root,  bool curr , int & ans)
    {
         if(root== NULL)
             return   ; 
         if(root->left == NULL && root->right == NULL )
         {
             if(curr)
                 ans+= root->val;
              return ;
         } 
        
          helper(root->left , true,  ans);
          helper(root->right , false, ans );    
        }
};