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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(q.front()!=NULL){
            TreeNode* frontNode=q.front();
            q.pop();
            q.push(frontNode->left);
            q.push(frontNode->right);
        }
        while(!q.empty() && q.front()==NULL){
            q.pop();
        }
        return q.empty();
    }
};