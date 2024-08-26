/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return{};
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            ans.push_back({});
            while(size--){
                Node* temp=q.front();
                q.pop();
                ans.back().push_back(temp->val);
                for(auto& child:temp->children) q.push(child);
            }
        }
        return ans;
    }
};