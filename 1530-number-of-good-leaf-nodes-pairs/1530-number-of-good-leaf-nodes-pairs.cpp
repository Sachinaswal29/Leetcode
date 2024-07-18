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
    void makeGraph(TreeNode* root, TreeNode* prev, unordered_map<TreeNode*,vector<TreeNode*>>& graph, unordered_set<TreeNode*>& leafNode){
        if(!root) return;
        if(!root->left && !root->right) leafNode.insert(root);
        if(prev!=NULL){
            graph[root].push_back(prev);
            graph[prev].push_back(root);
        }
        makeGraph(root->left,root,graph,leafNode);
        makeGraph(root->right,root,graph,leafNode);
    }
    
public:
    int countPairs(TreeNode* root, int distance) {
        unordered_map<TreeNode*,vector<TreeNode*>>graph;
        unordered_set<TreeNode*>leafNode;
        makeGraph(root,NULL,graph,leafNode);
        int goodPairs=0;
        for(auto& leaf:leafNode){
            queue<TreeNode*>q;
            q.push(leaf);
            unordered_set<TreeNode*>visited;
            visited.insert(leaf);
            for(int lvl=0;lvl<=distance;lvl++){
                int size=q.size();
                while(size--){
                    TreeNode* node=q.front();
                    q.pop();
                    if(node!=leaf && leafNode.contains(node)) goodPairs++;
                    for(auto &neighbour:graph[node]){
                        if(!visited.contains(neighbour)){
                            q.push(neighbour);
                            visited.insert(neighbour);
                        }
                    }
                }

            }
        }
        return goodPairs/2;
    }
};