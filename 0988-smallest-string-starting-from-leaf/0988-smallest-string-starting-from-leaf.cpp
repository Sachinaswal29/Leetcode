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
    // Using DFS   TC-> O(N2)
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


    // TC-> O(NlogN)
    string ans;
    void solve(TreeNode* root, string& curr) {
        if (!root) return;
        curr.push_back(root->val+'a');
        if (!root->left && !root->right) {
            reverse(curr.begin(), curr.end());
            if (ans.empty() || curr < ans) ans = curr;
            reverse(curr.begin(), curr.end());
        }
        solve(root->left, curr); 
        solve(root->right, curr);
        curr.pop_back();
    }

    string smallestFromLeaf(TreeNode* root) {
        string curr = "";
        solve(root, curr);
        return ans;
    }
    
    
    // Using BFS  TC-> O(N2)
    // string smallestFromLeaf(TreeNode* root) {
    //    string ans="";
    //    queue<pair<TreeNode*,string>>q;
    //    q.push({root,""});
    //    while(!q.empty()){
    //         TreeNode* frontNode=q.front().first;
    //         string curr=q.front().second;
    //         q.pop();
    //         curr=char(frontNode->val+'a')+curr;
    //         if(frontNode->left==NULL && frontNode->right==NULL){
    //             if(ans=="" || curr<ans) ans=curr;
    //         }
    //         if(frontNode->left) q.push({frontNode->left,curr});
    //         if(frontNode->right) q.push({frontNode->right,curr});
    //    }
    //    return ans;
    // }
};