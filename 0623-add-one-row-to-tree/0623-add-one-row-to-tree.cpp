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
    void solve(TreeNode* root, int val, int depth, int curDepth){
        if(!root) return;
        if(depth==curDepth+1){
            TreeNode* newLeftChild=new TreeNode(val);
            TreeNode* newRightChild=new TreeNode(val);
            TreeNode* prevLeftChild=root->left;
            TreeNode* prevRightChild=root->right;
            root->left=newLeftChild;
            root->right=newRightChild;
            newLeftChild->left=prevLeftChild;
            newRightChild->right=prevRightChild;
        }
        if(curDepth<depth){
            solve(root->left,val,depth,curDepth+1);
            solve(root->right,val,depth,curDepth+1);
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newRoot=new TreeNode(val);
            newRoot->left=root;
            return newRoot;
        }
        solve(root,val,depth,1);
        return root;
    }
};