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
    TreeNode* solve(TreeNode* root,unordered_set<int>& to_delete,vector<TreeNode*>& ans){
        if(!root) return NULL;
        root->left=solve(root->left,to_delete,ans);
        root->right=solve(root->right,to_delete,ans);
        if(to_delete.find(root->val)!=to_delete.end()){
           if(root->left) ans.push_back(root->left);
           if(root->right) ans.push_back(root->right);
           return NULL;
        }else return root;
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*>ans;
        unordered_set<int>s(to_delete.begin(),to_delete.end());
        solve(root,s,ans);
        if(s.find(root->val)==s.end()) ans.push_back(root);
        return ans;
    }
};