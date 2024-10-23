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
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*>parent;
            int sum=0;
            while(size--){
                TreeNode* node=q.front();
                q.pop();
                parent.push_back(node);
                if(node->left) q.push(node->left),sum+=node->left->val;
                if(node->right) q.push(node->right),sum+=node->right->val;
            }
            for(auto& par:parent){
                int currSum=sum;
                if(par->left) currSum-=par->left->val;
                if(par->right) currSum-=par->right->val;
                if(par->left) par->left->val=currSum;
                if(par->right) par->right->val=currSum;
            }
        }
        return root;
    }
};