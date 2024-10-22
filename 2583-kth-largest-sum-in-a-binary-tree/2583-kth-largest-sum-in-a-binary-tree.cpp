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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root) return -1;
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>ans;
        while(!q.empty()){
            long long size=q.size();
            long long sum=0;
            while(size--){
                TreeNode* node=q.front();
                q.pop();
                sum+= node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(sum);
        }
        sort(ans.rbegin(),ans.rend());
        if(k>ans.size()) return -1;
        return ans[k-1];
    }
};