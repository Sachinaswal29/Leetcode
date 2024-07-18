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
private:
    vector<int>dfs(TreeNode* root, int dist, int &goodPairs){
        if(!root) return{};
        if(!root->left && !root->right) return{1};
        vector<int>left=dfs(root->left,dist,goodPairs);
        vector<int>right=dfs(root->right,dist,goodPairs);
        for(auto& x:left){
            for(auto& y:right){
                if(x+y<=dist) goodPairs++;
            }
        }
        vector<int>infoToParent;
        for(auto& x:left){
            if(x+1<dist) infoToParent.push_back(x+1);
        }
        for(auto& x:right){
            if(x+1<dist) infoToParent.push_back(x+1);
        }
        return infoToParent;
    }
public:
    int countPairs(TreeNode* root, int distance) {
        int goodPairs=0;
        dfs(root,distance,goodPairs);
        return goodPairs;
    }
};