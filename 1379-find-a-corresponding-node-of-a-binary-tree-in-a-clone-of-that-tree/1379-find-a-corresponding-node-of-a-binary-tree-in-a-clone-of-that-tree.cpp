/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
           void   preorder( TreeNode * root ,  TreeNode * &node  , TreeNode *target){
                if( root == NULL)
                     return ;
                 if (root ->val == target->val)
                 {   
                      cout<< root->val ; 
                      cout<<endl;
                      node =  root ; 
                      return ;
                 }
               
                 preorder (root->left, node , target);
                 preorder(root->right ,  node , target );
           }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
           cout<<cloned-> val ;
        
         TreeNode *  node ; 
          preorder( cloned ,  node , target );
           return node ;
          return cloned ; 
        
        
    }
};