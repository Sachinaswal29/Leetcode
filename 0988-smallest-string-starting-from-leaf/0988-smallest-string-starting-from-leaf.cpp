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
    string ans;
    void solve(TreeNode* root, string curr){
        if(!root) return;
        curr=char(root->val+'a')+curr;
        if(!root->left && !root->right){
            if(ans=="" || curr<ans) ans=curr;
            return;
        }
        solve(root->left,curr);
        solve(root->right,curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        solve(root,"");
        return ans;
    }
};