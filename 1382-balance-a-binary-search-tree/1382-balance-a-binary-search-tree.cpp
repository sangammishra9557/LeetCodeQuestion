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
    

    
    TreeNode * arraytoBST( vector<int> & ans ,  int  start , int end ){
          if( start > end )   return nullptr;
           
           int mid = start + (end - start)/2;
           TreeNode  * root =new TreeNode(ans[mid]);
           root->left = arraytoBST(ans , start ,mid-1);
           root-> right = arraytoBST(ans , mid+1 , end);
        
           return root;
        
        
    } 
    TreeNode* balanceBST(TreeNode* root) {
         stack<TreeNode * > st ; 
         vector<int> ans ;
         if( root == NULL)
              return NULL;
           while( !st.empty() || root != NULL){
               
                while( root != NULL){
                     
                     st.push(root);
                     root= root-> left;
                }
                  auto node  = st.top();
                  ans.emplace_back(node-> val);
                  st.pop();
                  root = node -> right; 
                        
           }
          return (arraytoBST(ans , 0 , ans.size()-1));
        
        
        
        
    }
};