class Solution {
public:
   bool dfs(int node, int target, vector<int> adj[],vector<int>& vis){
        vis[node]=1;
        if(node==target){
            return true;
        }
        for(auto& neigh:adj[node]){
            if(!vis[neigh]&&dfs(neigh,target, adj,vis)){
                return true;
            }
        }
        return false;
    }


    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        vector<bool> ans(queries.size(),false);
        if(pre.size()==0){
            return ans;
        }

        vector<int> adj[numCourses];
        for(auto&x:pre){
            adj[x[0]].push_back(x[1]);
        }

        for(int i=0; i<queries.size(); i++){
            vector<int>vis(numCourses,0);
            ans[i]=dfs(queries[i][0],queries[i][1], adj, vis);
        }
        return ans;
    }
};