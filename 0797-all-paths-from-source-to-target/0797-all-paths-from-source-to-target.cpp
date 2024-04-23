class Solution {
public:
    void dfs(vector<vector<int>>& graph, int node, int target, vector<int>& temp,  vector<vector<int>>& ans){
        temp.push_back(node);
        if(node==target) ans.push_back(temp);
        for(auto &v:graph[node]){
            dfs(graph,v,target,temp,ans);
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(graph,0,graph.size()-1,temp,ans);
        return ans;
    }
};