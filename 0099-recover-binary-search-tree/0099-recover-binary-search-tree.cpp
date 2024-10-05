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
    vector<int>v;
    int idx=0;
    void inOrder(TreeNode* root){
        if(!root) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }

    void rTree(TreeNode* root){
        if(!root) return;
        rTree(root->left);
        root->val=v[idx++];
        rTree(root->right);
    }

    void recoverTree(TreeNode* root) {
        inOrder(root);
        sort(v.begin(),v.end());
        rTree(root);
    }
};