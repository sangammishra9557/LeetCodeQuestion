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
    int widthOfBinaryTree(TreeNode* root) {
     
        
         if(!root) return 0 ; 
         queue<pair<TreeNode *, int>> q ; 
         q.push({root , 0});
        long ans = 0 ; 
         while(!q.empty()){
              int n = q.size();
               long first =  q.front().second;
               long last= q.back().second;
                ans = max(ans  , last - first+1);
                for(int i = 0 ; i < n ; i++){
                     auto  it = q.front();
                     q.pop();
                     auto node = it.first ; 
                     long  idx = it.second;
                      if(node->left) q.push({node->left , 2*idx+1});
                      if(node->right) q.push({node->right , 2*idx+2});
                    
                }
             
             
         }
         return ans ;
    }
};