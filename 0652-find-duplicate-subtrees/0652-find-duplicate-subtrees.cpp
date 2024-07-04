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
private:
    string solve(TreeNode* root, vector<TreeNode*>& ans, unordered_map<string,int>& mp){
        if(!root) return "N";
        string s=to_string(root->val)+" , "+solve(root->left,ans,mp)+" , "+solve(root->right,ans,mp);
        if(mp[s]==1) ans.push_back(root);
        mp[s]++;
        return s;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>ans;
        unordered_map<string,int>mp;
        solve(root,ans,mp);
        return ans;
    }
};