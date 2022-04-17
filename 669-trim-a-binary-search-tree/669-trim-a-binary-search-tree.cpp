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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        
         if(root==  nullptr)
             return NULL;
        
         if(root->val >= low  &&  root->val <= high)
         {
             root->left = trimBST(root->left, low , high);
             root->right = trimBST(root->right, low , high);
              return root;
             // this is step is very important  to return  because it will                         return the same vale  as in left or right if in  the range    
             // other wise  from the below condition we would get the ans in left or                right  which is the correct value present in the range provided
             
         }
         if( root->val <  low )
              return trimBST(root->right , low ,  high);
        
         if( root-> val >  high)
              return trimBST(root-> left , low , high);
         return   NULL;
    }
};