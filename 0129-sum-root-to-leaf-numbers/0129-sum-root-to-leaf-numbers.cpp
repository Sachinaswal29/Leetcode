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
    // int solve(TreeNode* root, int sum){
    //     if(!root) return 0;
    //     sum=sum*10+root->val;
    //     if(!root->left and !root->right){
    //         return sum;
    //     }
    //     return solve(root->left,sum) + solve(root->right,sum);
    // }
    // int sumNumbers(TreeNode* root) {
    //     return solve(root,0);
    // }

    // Using BFS
    int sumNumbers(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int totalSum=0;
        while(!q.empty()){
            TreeNode* frontNode=q.front().first;
            int curSum=q.front().second;
            q.pop();
            curSum=curSum*10+frontNode->val;
            if(!frontNode->left and !frontNode->right) totalSum+=curSum;
            if(frontNode->left) q.push({frontNode->left,curSum});
            if(frontNode->right) q.push({frontNode->right,curSum});
        }
        return totalSum;
    }
};