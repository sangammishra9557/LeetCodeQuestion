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
    bool isValidBST(TreeNode* root) {
    
     bool istrue = true ;
     stack<TreeNode *>   st ;
       long long  prev = ((long long)INT_MIN )- 1;
        cout<<prev;
         while( !st.empty()  || root != NULL)
         {
              while(root != NULL)
              {
                  st.push(root);
                  root = root->left;
              }
             
               auto top = st.top();
                st.pop();
                 if(top->val <= prev )
                     return false;
                  prev = top->val;
                  root = top->right;
         }
        return true;
    }
};