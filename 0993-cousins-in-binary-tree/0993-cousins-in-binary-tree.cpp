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
    
    int l1 = 0  , l2 = 0 ;
    int p1 = -1 , p2 = 0;
    void helper(TreeNode * root , int x , int y , int level , int parent ){
        
        if( root == NULL) return ;  
        
        
        if( root-> val == x ) l1 = level  , p1 = parent;
        if(root->val == y) l2 = level , p2 = parent ; 
        helper(root->left , x , y, level+1 , root->val);
        helper(root->right, x , y, level+1 , root->val);
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
      helper(root , x , y , 0 , -1);
        cout<<l1<<" "<<l2<<" "<<p1<<" "<<p2;
      return l1 == l2 && p1 != p2;
    }
};