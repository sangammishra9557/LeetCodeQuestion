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
    int sumRootToLeaf(TreeNode* root) {
          int ans = 0 ; 
           sum ( root, ""+to_string(root->val) , ans);
         return ans ; 
        
        
    }
 private :
        void  sum (TreeNode  * root, string curr ,  int &ans)
        {
             if( root->left == NULL and root->right == NULL)
             {ans+=  stoi(curr,0,2);
              return ; 
             }     
            
            if(root->left )
                  sum(root->left,curr+ to_string(root->left->val),ans);
            if(root->right)
                  sum(root->right , curr+to_string(root->right->val), ans);
                   
        }
   
    
};