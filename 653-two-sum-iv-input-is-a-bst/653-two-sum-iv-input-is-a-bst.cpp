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
    bool findTarget(TreeNode* root, int k) {
        
          vector<int> ans ; 
           stack<TreeNode *>  st; 
        while(!st.empty() || root != NULL){
            
             while(root != NULL){
                  st.push(root);
                   root = root->left ;                          
             }
              auto node = st.top();
                st.pop();
                  ans.emplace_back(node -> val ); 
                root = node->right;            
        }
           int  i = 0 , j = ans.size() -1 ; 
           
            while( i < j )
            {  if( ans[i] + ans[j] == k)
                   return true ; 
               else if ( ans[i] + ans[j]  > k)
                     j -- ; 
               else  i++;
                
            }
         return false;
        
        
    }
};