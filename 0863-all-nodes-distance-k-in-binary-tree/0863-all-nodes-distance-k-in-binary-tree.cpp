/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       unordered_map<TreeNode * , TreeNode *> mapping ; 
       unordered_map<TreeNode * ,  bool > visited ;
         vector<int> ans ;
        
         if( root == NULL || target == NULL) return ans;
        queue<TreeNode *> q ; 
        q.push(root);
        while(! q.empty()){
            
             auto node = q.front();
             q.pop();
             if(node->left) {
                 mapping[node->left] = node ; 
                 q.push(node->left);
             } 
             if(node->right)
             {
                 mapping[node->right] = node ;
                 q.push(node->right);
             }
        }

        q.push(target);
        visited[target] = true;
        int cc = 0 ; 
        
        while( ! q.empty()){
          if( cc == k)  break ;
            cc++;
           int s = q.size();
           for( int i = 0 ; i<s ; i++){
                auto node = q.front();
                q.pop();
                if( node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] = true;
                }
                 if( node->right && !visited[node->right]){
                      q.push(node->right);
                      visited[node->right] = true ; 
                 }
                if( mapping[node] && ! visited[mapping[node]]){
                     q.push(mapping[node]);
                     visited[mapping[node]] = true ;
                }
           
           }
            
        
        }
        while(! q.empty()){
             auto top = q.front();
             q.pop();
            ans.push_back(top->val);
        }
        return ans;
     
    }
};