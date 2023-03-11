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
        
//           if( root == NULL)
//               return new TreeNode(val);
         
         
//            if(root->val> val)
//                 root->left = insertIntoBST(root->left, val);
//           else 
//               root->right =  insertIntoBST(root->right , val);
//          return root;
        
         TreeNode * current = root ; 
          TreeNode * parent = NULL;
          if(root == NULL) return new TreeNode(val);
         while(true){
             
              if(current-> val > val){
                   if(!current->left) 
                   {  current->left = new TreeNode(val);
                    break;}
                  current = current->left;
                        }
              else {
                  if(!current->right) 
                  {current->right = new TreeNode(val);
                   break;}
                  current = current->right;
                  
              }
         }
        
        
        return root;
        
    }
};