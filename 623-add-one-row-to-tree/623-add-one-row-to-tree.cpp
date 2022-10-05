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
    TreeNode* addOneRow(TreeNode* root, int val, int depth, int turn = 1) {        
        if(depth == 1) 
        {
            TreeNode* addedNode = new TreeNode(val);
            if(turn == 1)
            {
                addedNode->left = root;
            }
            else if(turn == 2)
            {
                addedNode->right = root;
            }
            return addedNode;
        }
        if(root == NULL) return NULL;
        
        root->left = addOneRow(root->left, val, depth - 1, 1);
        root->right = addOneRow(root->right, val, depth - 1, 2);
        return root;
    }
};