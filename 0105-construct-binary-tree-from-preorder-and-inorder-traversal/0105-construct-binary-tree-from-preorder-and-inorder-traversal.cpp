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
    unordered_map<int, int> mp ; 
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         
         for( int i =0 ; i<inorder.size() ; i++){
           mp[inorder[i]] = i ;    
         }
          int index = 0 ;
        return build(index , 0 , inorder.size()-1 , inorder , preorder);
     
    }
    TreeNode * build( int &index ,int instart , int  inend , vector<int> &inorder , vector<int> & preorder){
    
         if( index >= preorder.size() || instart> inend) return NULL;
          
         int elemt = preorder[index++];
         TreeNode * root =  new TreeNode(elemt);
         int pos = mp[elemt];
         root->left  = build(index , instart , pos-1  , inorder , preorder);
         root->right = build(index  ,pos+1 , inend , inorder  , preorder);
         
         return root; 
         
         
 
        
    }
};