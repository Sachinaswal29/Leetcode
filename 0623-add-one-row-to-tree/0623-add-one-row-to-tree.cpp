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
    // Using DFS
    // void solve(TreeNode* root, int val, int depth, int curDepth){
    //     if(!root) return;
    //     if(depth==curDepth+1){
    //         TreeNode* newLeftChild=new TreeNode(val);
    //         TreeNode* newRightChild=new TreeNode(val);
    //         TreeNode* prevLeftChild=root->left;
    //         TreeNode* prevRightChild=root->right;
    //         root->left=newLeftChild;
    //         root->right=newRightChild;
    //         newLeftChild->left=prevLeftChild;
    //         newRightChild->right=prevRightChild;
    //     }
    //     if(curDepth<depth){
    //         solve(root->left,val,depth,curDepth+1);
    //         solve(root->right,val,depth,curDepth+1);
    //     }
    // }
    // TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    //     if(depth==1){
    //         TreeNode* newRoot=new TreeNode(val);
    //         newRoot->left=root;
    //         return newRoot;
    //     }
    //     solve(root,val,depth,1);
    //     return root;
    // }

    // Using BFS
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newRoot=new TreeNode(val);
            newRoot->left=root;
            return newRoot;
        }
        queue<TreeNode*>q;
        q.push(root);
        int curDepth=1;
        while(curDepth!=depth-1){
            int size=q.size();
            while(size--){
            TreeNode* frontNode=q.front();
            q.pop();
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
            }
            curDepth++;
        }
        
        while(!q.empty()){
            TreeNode* frontNode=q.front();
            q.pop();
            TreeNode* newLeftChild=new TreeNode(val);
            TreeNode* newRightChild=new TreeNode(val);
            TreeNode* prevLeftChild=frontNode->left;
            TreeNode* prevRightChild=frontNode->right;
            frontNode->left=newLeftChild;
            frontNode->right=newRightChild;
            newLeftChild->left=prevLeftChild;
            newRightChild->right=prevRightChild;
        }
        return root;
    }
};