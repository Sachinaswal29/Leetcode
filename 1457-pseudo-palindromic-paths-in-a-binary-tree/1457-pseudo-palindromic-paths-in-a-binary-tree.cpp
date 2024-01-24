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
    int ans=0;
    void solve(TreeNode* root,vector<int>&v){
        if(!root) return ;
        v[root->val]++;
        if(root->left==NULL && root->right==NULL){
            int count=0;
            for(auto i:v){
                if(i%2!=0) count++;
            }
            if(count<=1) ans++;
        }
        solve(root->left,v);
        solve(root->right,v);
        v[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 1;
        vector<int>v(10,0);
        solve(root,v);
        return ans;
    }
};