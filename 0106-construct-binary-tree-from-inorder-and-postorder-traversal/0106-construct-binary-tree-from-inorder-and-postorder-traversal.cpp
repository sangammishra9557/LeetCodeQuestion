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
    unordered_map<int , int> mp;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        
         for( int i =0 ; i<inorder.size() ; i++){
           mp[inorder[i]] = i ;    
         }
          int index = postorder.size()-1;
      
        return build(index ,  0  , inorder.size()-1 ,  inorder  , postorder);
        
        
    }
    TreeNode * build(int & index ,int  instart ,int inEnd , vector<int>& inorder , vector<int> & postorder){
         
         if( index < 0  || instart > inEnd) return NULL;
        
         int elemt = postorder[index--];
         TreeNode * root = new TreeNode(elemt);
         int pos =  mp[elemt];
        
         root->right = build(index , pos+1 , inEnd , inorder  , postorder);
         root->left  = build(index ,instart , pos-1 , inorder , postorder);
         
         return root;
        
    }
};