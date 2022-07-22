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
    vector<int> postorderTraversal(TreeNode* root) {
        
        
        
        
//          vector<int> ans ; 
//          if( root == NULL)
//                return ans ; 
          
//            stack<TreeNode *> st ;
//           while( !st.empty() || root != NULL)
//           {
//                while( root!= NULL){
//                        st.push(root);
//                        ans.push_back(root->val);
//                         root = root->right;
                  
//                }
//                auto node = st.top();
//                 st.pop();
//                 root = node->left;
//           }
//          reverse(ans.begin(),ans.end());
//          return ans;
//     }
        vector<int> result ;
         if(root ==  NULL)  return  result ; 
         stack<TreeNode * > st ; 
         while(!st.empty() || root != NULL){
              while(root != NULL){
                      result.push_back( root->val);
                      st.push(root);
                      root = root->right ; 
              } 
                    auto leftmost = st.top();
                     st.pop();
                    root =  leftmost->left;
         }
         reverse(result.begin() , result.end());
         return result;
    }
    
};