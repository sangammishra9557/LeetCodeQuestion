class Solution {
public:
    void preorder(TreeNode *root, map<int, map<int, multiset<int>>> &mp, int x, int y) {
        if (root) {
            mp[x][y].insert(root->val);
            preorder(root->left, mp, x-1, y+1);
            preorder(root->right, mp, x+1, y+1);
        }
    }    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;
        preorder(root, mp, 0, 0);        
        vector<vector<int>> ans;        
        for(auto x: mp) {
            vector<int> col;
            for(auto y : x.second) col.insert(col.end(),y.second.begin(),y.second.end());            
            ans.push_back(col);
        }        
        return ans;
    }
};