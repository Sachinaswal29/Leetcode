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
    int xdepth, ydepth, xparent, yparent;
    void solve(TreeNode* root, int x, int y, int parent, int depth){
        if(!root) return ;
        if(root->val==x){
            xdepth=depth;
            xparent=parent;
            return;
        }
        if(root->val==y){
            ydepth=depth;
            yparent=parent;
            return;
        }
        solve(root->left,x,y,root->val,depth+1);
        solve(root->right,x,y,root->val,depth+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
       solve(root,x,y,0,0);
       return xdepth==ydepth && xparent!=yparent;

    }
};