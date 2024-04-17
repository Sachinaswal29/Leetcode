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
    // string ans;
    // void solve(TreeNode* root, string curr){
    //     if(!root) return;
    //     curr=char(root->val+'a')+curr;
    //     if(!root->left && !root->right){
    //         if(ans=="" || curr<ans) ans=curr;
    //         return;
    //     }
    //     solve(root->left,curr);
    //     solve(root->right,curr);
    // }
    // string smallestFromLeaf(TreeNode* root) {
    //     solve(root,"");
    //     return ans;
    // }

    // Using BFS
    string smallestFromLeaf(TreeNode* root) {
       string ans="";
       queue<pair<TreeNode*,string>>q;
       q.push({root,""});
       while(!q.empty()){
            TreeNode* frontNode=q.front().first;
            string curr=q.front().second;
            q.pop();
            curr=char(frontNode->val+'a')+curr;
            if(frontNode->left==NULL && frontNode->right==NULL){
                if(ans=="" || curr<ans) ans=curr;
            }
            if(frontNode->left) q.push({frontNode->left,curr});
            if(frontNode->right) q.push({frontNode->right,curr});
       }
       return ans;
    }
};