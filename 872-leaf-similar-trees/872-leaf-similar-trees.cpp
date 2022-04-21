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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         
         vector<int> ans; 
         vector <int> ans2;
         leafs(root1 , ans);
         leafs(root2 , ans2);
         return  ans==ans2;
    }
     
    private:
            void leafs(TreeNode * root  , vector<int> & leaves)
            {  
                 if(root== NULL)
                      return ;
                if(root->left ==NULL && root->right ==NULL)
                    {leaves.push_back(root->val);
                      return ;
                    }
                  leafs(root->left , leaves);
                  leafs(root->right , leaves);
                 
                
            }
};