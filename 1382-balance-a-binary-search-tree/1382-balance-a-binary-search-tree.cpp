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
    void inOrder(TreeNode* root, vector<int>& v){
        if(!root) return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    
    TreeNode* builtBst(vector<int>&v,int start, int end){
        if(start>end) return NULL;
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=builtBst(v,start,mid-1);
        root->right=builtBst(v,mid+1,end);
        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inOrder(root,v);
        return builtBst(v,0,v.size()-1);
    }
};