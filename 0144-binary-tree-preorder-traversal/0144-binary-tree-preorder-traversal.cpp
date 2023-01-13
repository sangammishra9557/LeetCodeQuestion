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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result; 
        stack<TreeNode * >  st; 
         while(!st.empty() || root != NULL){
              
              while(root != NULL){
                    result.push_back(root->val);
                    st.push(root);
                    root = root->left;
              }
               auto leftmost =  st.top();
                st.pop();
                root= leftmost->right ; 
         }
         return result;
        // vector<int> result;
        // stack<TreeNode*> st;
        // while(!st.empty() || root != NULL)
        // {
        //     while(root != NULL)
        //     {
        //         result.push_back(root->val);
        //         st.push(root);
        //         root = root->left;
        //     }
        //     TreeNode* leftMost = st.top();
        //     st.pop();
        //     root = leftMost->right;
        // }
        // return result;
        
        
        
//  vector<int> ans; 
//          stack<TreeNode *>  st ; 
//            if(root== NULL)  return ans ;
//            st.push(root);
//           while(!st.empty())
//           {  auto node = st.top();
//                st.pop();
//                ans.push_back(node->val);
//                if(node->right) st.push(node->right);
//                if(node->left) st.push(node->left);
              
//           }
//          return ans;
    }        // ALTERNATE SOLUTION 
         
};