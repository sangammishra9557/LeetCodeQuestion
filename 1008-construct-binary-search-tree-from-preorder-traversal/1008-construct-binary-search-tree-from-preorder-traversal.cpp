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
    
    
     int i = 0 ;
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
            
            return  buildTree(preorder,   1001);
        
    }
       TreeNode * buildTree( vector<int> & preorder ,  int ub){
            if( i >= preorder.size() ||  preorder[i] > ub)
                 return nullptr; 
           
             TreeNode * root = new TreeNode(preorder[i]);
             i++;
              root-> left = buildTree(preorder ,  root->val );
              root->right = buildTree(preorder ,  ub);
              return root;
     }
};